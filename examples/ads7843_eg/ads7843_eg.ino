/**
  @file    ads7843_eg.ino
  @author  www.elechouse.com
  @brief   example of ELECHOUSE ads7843 library
  
  @section  HISTORY
  
  V1.0 initial version
  
    Copyright (c) 2013 www.elechouse.com  All right reserved.
*/
#include <ads7843.h>

#define DCLK     2
#define CS       3  
#define DIN      4 
#define DOUT     6
#define IRQ      5 


ADS7843 touch(CS, DCLK, DIN, DOUT, IRQ);
Point p;

void setup(void)
{
  Serial.begin(115200);
 touch.begin();
}

void loop(void)
{
  uint8_t flag;
  /** getpos */
 p=touch.getpos(&flag) ;
 if(flag){
   /** get position successfully */
   
   /** print the coordinate */
   Serial.print(p.x, DEC);
   Serial.print("   ");
   Serial.print(p.y, DEC);
   Serial.println();
 }
}
