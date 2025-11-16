#include "HID-Project.h"
/*
    pin|   BUTTON   | KEY1  | KEY2  | KEY3 |
     2 | UP/Z       | UP    |       | Z    |
     3 | DOWN/Y     | DOWN  |       | Y    |
     4 | LEFT/X     | LEFT  |       | X    |
     5 | RIGHT/MODE | RIGHT |       | MODE |
     6 | C/START    | C     | START |      |
     7 | {SELECT}   |       |       |      |
     8 | B/A        | B     | A     |      |
    ---GAMEPAD 2---
     9 |DOWN/Y      | DOWN  |       | Y    |
    21 |LEFT/X      | LEFT  |       | X    |
    20 |RIGHT/MODE  | RIGHT |       | MODE |
    19 |UP/Z        | UP    |       | Z    |
    15 |C/START     |C      | START |      |
    14 |B/A         |B      | A     |      |
    
 */
unsigned long t;
void setup() {

  pinMode(7,1);
  
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  
  pinMode(9,INPUT_PULLUP);
  pinMode(21,INPUT_PULLUP);
  pinMode(20,INPUT_PULLUP);
  pinMode(19,INPUT_PULLUP);
  pinMode(15,INPUT_PULLUP);
  pinMode(14,INPUT_PULLUP);
  
  Gamepad.begin();
}

void loop() {
  // задержка в мс чтения/передачи
  // больше число - больше задержка и меньше скорость
  // было 10. изменил на 50
  if (millis()-t >= 16){
  t = millis();
  digitalWrite(7,1);
  delayMicroseconds(20);
  Gamepad.releaseAll();
  if (digitalRead(2) == 0) Gamepad.yAxis(-32768);
  if (digitalRead(3) == 0) Gamepad.yAxis(32767);
  if (digitalRead(4) == 0) Gamepad.xAxis(-32768);
  if (digitalRead(5) == 0) Gamepad.xAxis(32767);
  if (digitalRead(6) == 0) Gamepad.press(3);
  if (digitalRead(8) == 0) Gamepad.press(2);

  if (digitalRead(9)  == 0) Gamepad.ryAxis(-32768);
  if (digitalRead(21) == 0) Gamepad.rxAxis(-32768);
  if (digitalRead(20) == 0) Gamepad.rxAxis(32767);
  if (digitalRead(19) == 0) Gamepad.ryAxis(32767);
  if (digitalRead(15) == 0) Gamepad.press(11);
  if (digitalRead(14) == 0) Gamepad.press(10);
  digitalWrite(7,0);
  delayMicroseconds(20);
  
  if (digitalRead(6) == 0) Gamepad.press(7);
  if (digitalRead(8) == 0) Gamepad.press(1); 
  
  if (digitalRead(15) == 0) Gamepad.press(15);
  if (digitalRead(14) == 0) Gamepad.press(9);
  
  digitalWrite(7,1);
  delayMicroseconds(20);
  digitalWrite(7,0);
  delayMicroseconds(20);
  digitalWrite(7,1);
  delayMicroseconds(20);
  digitalWrite(7,0);
  delayMicroseconds(20);
  digitalWrite(7,1);
  delayMicroseconds(20);
  
  if (digitalRead(2) == 0) Gamepad.press(6);
  if (digitalRead(3) == 0) Gamepad.press(5);
  if (digitalRead(4) == 0) Gamepad.press(4);
  if (digitalRead(5) == 0) Gamepad.press(8);
  
  if (digitalRead(9) == 0) Gamepad.press(13);
  if (digitalRead(21) == 0) Gamepad.press(12);
  if (digitalRead(20) == 0) Gamepad.press(16);
  if (digitalRead(19) == 0) Gamepad.press(14);
  
  digitalWrite(7,0);
  delayMicroseconds(20);
  digitalWrite(7,1);
  delayMicroseconds(20);
  
  Gamepad.write();
  
  }
  
}
