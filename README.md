# touch
arduino driver for Touch 

Change all uintX to uint32 

Comment all this variable [From link](
http://rishifranklin.blogspot.com/2014/08/arduino-tft-lcd.html)

// Pio* _cs_port, *_dclk_port, *_din_port, *_dout_port, *_irq_port;

// uint32_t _cs_pin, _dclk_pin, _din_pin, _dout_pin, _irq_pin;


----

PIN List

 #define DCLK     2
 
 #define CS       3  
 
 #define DIN      4 
 
 #define DOUT     6
 
 #define IRQ      5 

IRQ is PEN 
