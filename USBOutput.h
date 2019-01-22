// USBOutput.h

#ifndef _USBOUTPUT_h
#define _USBOUTPUT_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Output.h"

class USBOutput : public Output
{
public:
	void sendKeyEvent(int key, bool pressed, bool doublePressed) override;
	void sendSensorEvent(float position) override;
};

#endif

