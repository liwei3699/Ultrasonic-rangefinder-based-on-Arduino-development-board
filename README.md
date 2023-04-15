# Ultrasonic rangefinder based on Arduino-development board
This group of experiments uses open source hardware to form an ultrasonic ranging alarm system, tries to use an intelligent host to control and manage the sensing signal and judge and process to complete the alarm function, and explores the working principle and working process of the intelligent information system.
## Experimental parts
Arduino circuit board
Ultrasonic module
Active buzzer
9V battery
## Circuit design
![1681535161761](https://github.com/liwei3699/Ultrasonic-rangefinder-based-on-Arduino-development-board/blob/main/%E7%94%B5%E8%B7%AF%E5%9B%BE%E8%AE%BE%E8%AE%A1.png)
## How it works
(1) The circuit board generates a high-pulse trigger ultrasonic ranging module
(2) The circuit board determines whether the distance between the object and the circuit board is lower than the set value of 35cm
(3) If it is lower, the active buzzer beeps
