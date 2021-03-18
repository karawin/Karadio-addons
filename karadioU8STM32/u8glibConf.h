// u8glibConf.h

#ifndef _U8GLIBCONF_h
#define _U8GLIBCONF_h
#define logo_width 60
#define logo_height 51

#include "U8glib.h"
static unsigned char logo_bits[] PROGMEM = {
  0xFF, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x07, 0x00, 
  0x00, 0xFE, 0xFF, 0x0F, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xF8, 0xFF, 0x0F, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0x0F, 0xFF, 0x1D, 0x20, 0x00, 0x40, 0x80, 0xFF, 0x0F, 
  0x7F, 0x0E, 0x90, 0x00, 0x80, 0x00, 0xFF, 0x0F, 0x3F, 0x07, 0x40, 0x00, 
  0x20, 0x00, 0xFE, 0x0F, 0xBF, 0x03, 0x48, 0x00, 0x20, 0x01, 0xFC, 0x0F, 
  0xDF, 0x03, 0x08, 0x61, 0x48, 0x00, 0xF8, 0x0F, 0xCF, 0x01, 0x20, 0xF9, 
  0x49, 0x02, 0xF8, 0x0F, 0xE7, 0x00, 0xA4, 0xF8, 0x41, 0x02, 0xF0, 0x0F, 
  0xF7, 0x00, 0x24, 0xFC, 0x53, 0x00, 0xE0, 0x0F, 0x73, 0x00, 0x84, 0xFC, 
  0x03, 0x02, 0xE0, 0x0F, 0x7B, 0x00, 0x20, 0xF8, 0x51, 0x02, 0xC0, 0x0F, 
  0x39, 0x00, 0x24, 0xF9, 0x48, 0x00, 0xC0, 0x0F, 0x3D, 0x00, 0x28, 0x60, 
  0x00, 0x01, 0xC0, 0x0F, 0x1D, 0x00, 0x40, 0x72, 0x24, 0x01, 0x80, 0x0F, 
  0x1C, 0x00, 0x48, 0xF0, 0x90, 0x00, 0x80, 0x0F, 0x1E, 0x00, 0x90, 0xF0, 
  0x80, 0x00, 0x80, 0x0F, 0x1E, 0x00, 0x20, 0xF0, 0x40, 0x00, 0x80, 0x0F, 
  0x1E, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0x0E, 0x00, 0x00, 0xF0, 
  0xC0, 0x1F, 0x00, 0x0F, 0x0E, 0x60, 0x30, 0xB8, 0xC1, 0x3F, 0x00, 0x0F, 
  0x0E, 0x60, 0x18, 0xD8, 0xC1, 0x70, 0x00, 0x0F, 0x0E, 0x70, 0x1C, 0xF8, 
  0xC1, 0x60, 0x00, 0x0F, 0x0F, 0x60, 0x0C, 0x98, 0xE1, 0x60, 0x00, 0x0F, 
  0x0E, 0x30, 0x06, 0x98, 0xC1, 0x60, 0x00, 0x0F, 0x0E, 0x70, 0x03, 0xBC, 
  0xC1, 0x60, 0x00, 0x0F, 0x0F, 0xA0, 0x03, 0x9C, 0xC3, 0x70, 0x00, 0x0F, 
  0x1F, 0xF0, 0x01, 0x0C, 0xC3, 0x3F, 0x80, 0x0F, 0x1F, 0xE0, 0x01, 0xDC, 
  0xC3, 0x0F, 0x80, 0x0F, 0x1F, 0x60, 0x03, 0x0C, 0xE3, 0x0C, 0x80, 0x0F, 
  0x1F, 0x70, 0x07, 0x0C, 0xC3, 0x1C, 0x80, 0x0F, 0x3F, 0x60, 0x06, 0x0C, 
  0xC7, 0x18, 0xC0, 0x0F, 0x3F, 0x70, 0x0C, 0xDE, 0xC7, 0x30, 0xC0, 0x0F, 
  0x3F, 0x60, 0x18, 0x06, 0xC6, 0x70, 0xC0, 0x0F, 0x7F, 0x70, 0x38, 0x06, 
  0xC6, 0x60, 0xE0, 0x0F, 0x7F, 0x20, 0x30, 0xFE, 0x47, 0x20, 0xF0, 0x0F, 
  0xFF, 0x00, 0x00, 0x07, 0x06, 0x00, 0xF0, 0x0F, 0xFF, 0x01, 0x00, 0x03, 
  0x0C, 0x00, 0xF8, 0x0F, 0xFF, 0x01, 0x00, 0xDF, 0x0F, 0x00, 0xF8, 0x0F, 
  0xFF, 0x03, 0x00, 0x03, 0x0C, 0x00, 0xFC, 0x0F, 0xFF, 0x07, 0x00, 0x03, 
  0x0C, 0x00, 0xFE, 0x0F, 0xFF, 0x0F, 0x00, 0x03, 0x1C, 0x00, 0xFF, 0x0F, 
  0xFF, 0x1F, 0x80, 0x01, 0x08, 0x80, 0xFF, 0x0F, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 
  0xFF, 0xFF, 0x03, 0x00, 0x00, 0xFC, 0xFF, 0x0F, 0xFF, 0xFF, 0x0F, 0x00, 
  0x00, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0xFF, 0x0F, 
  }; 


#ifdef oled096
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);	// I2C / TWI
#endif
#ifdef oled130
U8GLIB_SH1106_128X64	u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);	// I2C / TWI
#endif
#ifdef ST7920
U8GLIB_ST7920_128X64_1X u8g(PA5, PA7, PA4);	// SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17
#endif
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
Version 1.0  first release
*/


/**** Instruction for 128X64 OLED LCD LED Display Module white For Arduino 0.96" I2C IIC SPI Serial *************************
 *    + IR + Rotary encoder
     ----------------------------------------------------------------------------------------------
NOTES:
Confirmed vendor:
lcd:
https://www.aliexpress.com/item/Free-shipping-1Pcs-128X64-OLED-LCD-LED-Display-Module-white-For-Arduino-0-96-I2C-IIC/32671702306.html?spm=2114.13010608.0.0.9K7DWb

STM32:
https://www.aliexpress.com/item/1pcs-STM32F103C8T6-ARM-STM32-Minimum-System-Development-Board-Module-For-arduino/32720697607.html?spm=2114.13010608.0.0.Dm20du
https://www.aliexpress.com/item/1pcs-STM32F103C8T6-ARM-STM32-Minimum-System-Development-Board-Module-For-arduino/32720697607.html?spm=2114.13010608.0.0.9K7DWb

Rotary Encoder Module KY-040:
https://www.aliexpress.com/item/5pcs-lot-Rotary-Encoder-Module-Free-Shipping-Dropshipping-KY-040-for-Arduino/32218652643.html?spm=2114.13010608.0.0.Dm20du

Infrared IR wireless:
https://www.aliexpress.com/item/Hot-Selling-1pcs-New-Infrared-IR-Wireless-Remote-Control-Module-Kits-For-Arduino-Wholesale/32334118062.html?spm=2114.13010608.0.0.j3B4M6 

--------
 Pins:
--------
See http://karadio.karawin.fr/images/KaradioUCSTM32l.jpg

Cable wiring between Graphic LCD and STM32:
-------------------------------------------
___STM32___LCD_______________
  PB7      LCD SDA .... PIN 4
  PB6      LCD SCK .... Pin 3
  Gnd      LCD Gnd .... Pin 1 or 2 (see the board)
  3.3      LCD Vcc .... Pin 2 or 1 (for your model) 


Cable wiring between nodeMcu and stm32
--------------------------------------
--NodeMcu--   --stm32
  Tx            Rx   PA10
  Rx            Tx   PA9
  Gnd           Gnd
  VU or 5V      5V

Cable wiring between STM32 and IR:
----------------------------------
The IR receiver pins:
From left to right (pin at bottom, sensor in front of you)
  GND  3.3  SIGNAL
to STM32:
  GND  3.3  PC15

Cable wiring between STM32 and KY040:
-------------------------------------
--KY040--   --STM32--
  A         PB12
  B         PB13
  Switch    PB14
  Vcc
  Gnd

Software:
---------
STM32DUINO  (to add support of the stm32 with arduino IDE:
https://github.com/rogerclarkmelbourne/Arduino_STM32
Bootloader (see http://wiki.stm32duino.com/index.php?title=Bootloader)
https://github.com/rogerclarkmelbourne/STM32duino-bootloader (the one we need is generic_boot20_pc13.bin)
Instruction to load the bootloader on stm32 (one time)
http://www.stm32duino.com/viewtopic.php?f=32&t=413
http://wiki.stm32duino.com/index.php?title=Uploading_a_sketch

Board: Generic STM32F103C series
Tools/variant set to 128K flash

Libraries needed:
u8glib for stm32 must be installed in  arduino IDE library;
https://github.com/karawin/U8glib_Arduino

IRMP library for stm32Duino:
https://github.com/karawin/irmp-master
See https://www.mikrocontroller.net/articles/IRMP_-_english

KY040 library:
https://github.com/karawin/encoder

IMPORTANT:
In C:\Users\jp\Documents\Arduino\hardware\Arduino_STM32\STM32F1\libraries\Wire
In wirebase.h change
In line 47
#define WIRE_BUFSIZ 32
to
#define WIRE_BUFSIZ 256  

Define your tzo (time zone offset) at the beginning of the ino.


--------
WARNING:
The webradio serial must be set at 115200 bauds
--------

In karadioU8STM32.ino:
//  Uncomment the following line to see the code of your remote control and report to the case the value
//    Serial.println(irmp_protocol_names[irmp_data.protocol]);
//    Serial.println(irmp_data.address,HEX);
//    Serial.println(irmp_data.command,HEX);
//    Serial.println(irmp_data.flags,HEX);
//    Serial.println(code,HEX);
//    Serial.println();
If you want to use another remote, you can see the code of the keys and modify the switch case for the needed function.
See IRMP.h  to add the protocol you need for the remote.

Enjoy.

jpc 05/2017
*/
