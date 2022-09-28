int Galpin = 7;


void setup() {
  // put your setup code here, to run once:
pinMode (Galpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (Galpin, HIGH);
delay(1000);
digitalWrite (Galpin, LOW);
delay(500);
}
