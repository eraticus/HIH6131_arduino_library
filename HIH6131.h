#include <Wire.h>

class HIH6131
{
public:
	int begin();
	float getTemperature();
	float getHumidity();
};