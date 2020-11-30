# Mule Controller
Most of the single-board controller for any machinery or systems only support one platform, SoC (System on Chip), SoM(System on Module), however with emerging the new technology in the smart industry and robotic, focused only one SoC or SoM has not covered all the project scop even with selecting very good hardware. Sometimes we need a microcontroller at a low level for data logging and data processing and sometimes we need to deliver our data in the IP network or SCADA systems. A Linux board such as Raspberry Pi is a good option for high-level front-end programming. Embedded Linux  promised many of system design in safety and security



The idea behind this controller board is to design general hardware which can use for both purpose with a lot of configuration and IO setting while it is cheap and easy to repair/replace its components 
STM32 are one the most popular MCU in the market, not only from its rich feature such as precise Analogue IO and interrupt handling but also for its vast resources & API for hobbyist and developer 

STM32F40X family has the advantage of a large number of multifunction IO for future expanding sensor-actuator parts or PWM rail servo. This chip support all communication protocol (CAN, Serial, I2C, I2S, SPI) with 198MHz clock and 1024KB	192KB	Flas-RAM memory 
This microcontroller connected via  I2C & SPI port to Raspberry Pi 3B+. STM32 can be programmed by  C/C++ Cube IDE and Raspberry Pi can run any script in C/Python code
sample code for this microcontroller with FreeRTOS feature exist [in this link](https://github.com/mkeyno/STM32_LED_RTOS)


Following is the PCB schematic and design

![Image](https://github.com/mkeyno/Mule_controller/blob/master/src/sch.png) 
![Image](https://github.com/mkeyno/Mule_controller/blob/master/src/brd.png) 
![Image](https://github.com/mkeyno/Mule_controller/blob/master/src/brd1.png) 
