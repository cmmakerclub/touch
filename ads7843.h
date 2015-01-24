#ifndef __ADS7843_H
#define __ADS7843_H

#if ARDUINO >= 100
 #include "Arduino.h"
 #include "Print.h"
#else
 #include "WProgram.h"
#endif

class Point {
 public:
  Point(void);
  Point(uint32_t x, uint32_t y, uint32_t z);
  
  bool operator==(Point);
  bool operator!=(Point);

  uint32_t x, y, z;
};

class ADS7843{
public:
	ADS7843(uint32_t cs, uint32_t dclk, uint32_t din, uint32_t dout, uint32_t irq);
	void begin();
	void write(uint32_t dat);
	uint32_t read();
	Point getpos(uint32_t *flag);
	void getPosOnce(uint32_t *x, uint32_t *y);
	uint32_t check_irq(void);
	uint32_t wr(uint32_t dat);
private:
	uint32_t _cs, _dclk, _din, _dout, _irq;
	// Pio* _cs_port, *_dclk_port, *_din_port, *_dout_port, *_irq_port;
	// uint32_t _cs_pin, _dclk_pin, _din_pin, _dout_pin, _irq_pin;
};

#endif