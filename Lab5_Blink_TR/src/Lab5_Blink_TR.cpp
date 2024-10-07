/* 
 * Project: Lab 5 Transmit and Receive
 * Author: Camille, Autumn, Cole, and Bentley
 * Date: 10-7-24
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// We define MY_LED to be the LED that we want to blink.
//
// We're using UART1 RX and UART1 TX for Lab 5.
// Team 1: Transmits data and blinks the LED. Send the data every 2 seconds. 
// Team 2: Receiver will get that data and print the data to the serial monitor.
// const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected.
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);

// int incomingByte = 0; // for incoming serial data

// The setup() method is called once when the device boots.
// We need to put something in the setup function for Lab 5...
void setup()
{
   Serial.begin(9600);   // open serial over USB

  // Wait for a USB serial connection for up to 30 seconds
  //waitFor(Serial.isConnected, 30000);

  Serial1.begin(9600);  // open serial over TX and RX pins

 // Serial.println("Hello Computer");
 // Serial1.println("Hello Serial 1");

  //Serial.begin(9600);
  //Serial1.begin(9600); // opens serial port, sets data rate to 9600 bps

  // Serial1.println("Hello World!");
 
  // Particle.disconnect();
  // WiFi.off();
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	// pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
// We need to transmit something in this code section, a sentence, etc.
// Slow down the loop timing for Lab 5.
//void loop()

void loop() {
  Serial.println(Serial1.readString());
  // send data only when you receive data:
  //if (Serial.available() > 0) {
    // read the incoming byte:
    // incomingByte = Serial.read();

    // say what you got:
    // Serial.print("I received: ");
    
    //}
}
