# SEGA_controller_PC_adapter
Переходник для подключения контроллеров SEGA MegaDrive к ПК с использованием Arduino pro micro.  

Компоненты:  
1. Arduino Pro Micro
2. Разъём/ы DB-9
3. Провода
4. Корпус (у меня это квадратная распредкоробка)

Схема подключения пинов платы Arduino к контактам коннектора DB-9 для подключения контроллеров:

    pin|   BUTTON   |
     2 | UP/Z       |
     3 | DOWN/Y     | 
     4 | LEFT/X     |
     5 | RIGHT/MODE |
     6 | C/START    |
     7 | {SELECT}   |
     8 | B/A        |
    ---GAMEPAD 2---
     9 |DOWN/Y      |
    21 |LEFT/X      |
    20 |RIGHT/MODE  |
    19 |UP/Z        |
    15 |C/START     |
    14 |B/A         |
Распиновка коннектора DB-9:  
 <img width="634" height="408" alt="image" src="https://github.com/user-attachments/assets/bf6e49c5-c90f-4530-91c1-dbfed861668f" />
