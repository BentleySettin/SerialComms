\
/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

const pin_t MY_LED = TX;

SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);

void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop(){
	Serial1.println("hello");

	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for one second
	delay(500ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait one more second
	delay(2s);

	// And repeat!
}