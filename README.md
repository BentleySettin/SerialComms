Transmitting code has the Argon transmit data over UART (specifically Serial1) in the loop() function. Every time it sends data, it should blink the LED on for 500 ms, then turn it back off. It should send data every 2 seconds.

Reciever code has the  Argon receive data from Transmitter Argon using Team Receiver Argon's UART (i.e., also their Serial1). Upon receiving data from Transmitter Argon, Receiver Argon prints the data to the serial monitor will be replaced by the appropriate code corresponding to data coming from Transmitter Argon.

Successful execution of the full project results in one Argon that is blinking an LED every 2 seconds for 500 ms and sending data to another Argon which is displaying those data on the second Argon's serial monitor (Team Receiver's computer screen) every two seconds.
