int led = 13; //The pin the LED is connected to 

void setup() {
  pinMode(led, OUTPUT); //Declare the LED as an output
  }

void loop() {
  digitalWrite(led, HIGH); //Turn the LED on, digitalWrite is for pins in digital whereas analogWrite is for analog pins
  delay(1000); //Delay for 1 second
  digitalWrite(led, LOW); //Turn the LED off
  delay(50);
  }
