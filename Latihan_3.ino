void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
delay(1000);
digitalWrite(7, LOW);
digitalWrite(8, HIGH);
delay(500);
}
