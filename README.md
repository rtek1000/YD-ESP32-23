# YD-ESP32-23

![img](https://raw.githubusercontent.com/rtek1000/YD-ESP32-23/main/yd_esp32_s3-23.jpg)

- Ref.: [YD-ESP32-S3 N16R8](https://circuitpython.org/board/yd_esp32_s3_n16r8/)

- The device uses the ESP32-S3 chip, which can be used for the test prototype of the Internet of Things application and can also be used for practical applications. It is equipped with two USBs, one is a hardware USB-to-serial port (CH343P WCH Qinheng), and the other is ESP32-S3 usb port.

Pinout:
![img](https://raw.githubusercontent.com/rtek1000/YD-ESP32-23/main/yd-esp32-s3-devkitc-1-clone-pinout.jpg)

- Ref.: [VCC-GND Studio YD-ESP32-S3 (DevKitC 1 clone): high-resolution pinout and specs](https://mischianti.org/vcc-gnd-studio-yd-esp32-s3-devkitc-1-clone-high-resolution-pinout-and-specs/)

#### Note:
- The ‘ESP32 S3 DevKitC1 Clone’ board has a jumper called 'RGB', another called 'IN-OUT', and another called 'USB-OTG', all open. But it may be necessary to solder the jumper for the devices to work.
- - The 'IN-OUT' jumper, when closed, bypasses one diode, making USB VBus power coming to 5Vin. If 5Vin is also connected to external source, it can get back-fed by USB, which is usually undesirable. But USB bus is protected by another diode, it cannot get back-fed by external source. When In-Out is open, 5Vin and USB VBus are separated by diode, USB power does not come to 5Vin.
- - The 'USB-OTG' jumper, when closed, connects together USB VBus lines from both USB-C connectors.
- - Ref.: [Third-party ESP32-S3 development boards 'IN-OUT' and 'USB-OTG' pads - what do they do?](https://www.reddit.com/r/esp32/comments/10rdngp/thirdparty_esp32s3_development_boards_inout_and/?rdt=39953)


- The RGB LED did not work with common digitalWrite() commands. RGB LED only worked with neopixelWrite() commands.
- - There is a BlinkRGB under the ESP32->GPIO examples that uses the onboard RGB LED.
- - Ref.: https://forum.arduino.cc/t/esp32-s3-devkit-problems/1136923/4
