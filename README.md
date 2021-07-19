# K40 GRBL cntrlr
 K40 ESP32 GRBL Controller.
 
This is a replacement for the M2 Nano controller. 
It supports GRBL 1.1 and raster engraving with grayscales.
Since the controller is based on ESP32 it supports Serial, Bluetooth and Wifi communications as well as working offline through the use of an SDCard. 
Designed with DIY in mind, all through-hole components or through-hole modules.

Firmware is forked from https://github.com/bdring/Grbl_Esp32, I only added a machine definition to it. Instructions how to build the software can be found there as well.

![image](https://github.com/ajvdw/k40_GRBLcntrlr/blob/main/media/k40grblcntrlr.jpg)
K40 GRBLCNTRLR v0.9 in situ.


## B.O.M.

- 1x PCB
- 1x Ttgo Wemos Mini D1 ESP32 Wifi + Bluetooth CP2104 Module
- 2x StepStick DRV8825 or A4988
- 2x resistor 4K7 1/4W
- 1x resistor 100K 1/4W
- 2x elect.cap. 47uF 36V
- 1x MOSFET N-Channel p75nf75 (similar to TO220)
- 1x 1.25Mm Ffc/Fpc Connector 12P
- 2x JST XH2.54 4P 
- 1x JST XH2.54 5P 
- 1x Micro Sd Tf Card Memory Shield Module SPI for Arduino 3.3V
- 1x Term.conn 5.1mm 4P

Total cost should be less than 20$.
