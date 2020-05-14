int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int button5 = 6;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int status1 = true;
int status2 = true;
int status3 = true;
int status4 = true;
int status5 = true;
int status6 = true;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
}

void loop(){
  if (digitalRead(button1) == false) {
  status1 = !status1;
  status5 = !status5;
  digitalWrite(led1, status1);
  digitalWrite(led5, status5);
  } while(digitalRead(button1) == false);
  delay(50);

  if (digitalRead(button2) == false) {
  status1 = !status1;
  status3 = !status3;
  digitalWrite(led1, status1);
  digitalWrite(led3, status3);
  } while(digitalRead(button2) == false);
  delay(50);

  if (digitalRead(button3) == false) {
  status3 = !status3;
  status4 = !status4;
  status5 = !status5;
  digitalWrite(led3, status3);
  digitalWrite(led4, status4);
  digitalWrite(led5, status5);
  } while(digitalRead(button3) == false);
  delay(50);

  if (digitalRead(button4) == false) {
  status1 = !status1;
  status4 = !status4;
  status2 = !status2;
  digitalWrite(led4, status4);
  digitalWrite(led1, status1);
  digitalWrite(led2, status2);
  } while(digitalRead(button4) == false);
  delay(50);

  if (digitalRead(button5) == false) {
  status5 = !status5;
  status6 = !status6;
  digitalWrite(led5, status5);
  digitalWrite(led6, status6);
  } while(digitalRead(button5) == false);
  delay(50);
}
