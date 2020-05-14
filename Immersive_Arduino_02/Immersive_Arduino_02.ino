#define touchPin 2
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(touchPin, INPUT);

}

void loop() {
  int touchValue = digitalRead(touchPin);
  if(touchValue == HIGH){   //HIGH = touched
    Serial.println("TOUCHED");
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    }
  delay(350);
}
