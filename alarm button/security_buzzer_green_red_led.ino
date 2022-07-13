int buzzer= 9;
int freq= 600;
int T= 1000;
int ledPin= 8;
int gledPin=4;
int buttonPin=2;
int buttonState=0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
pinMode(gledPin,OUTPUT);
pinMode( buttonPin,INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

   if (buttonState == HIGH) {
digitalWrite(ledPin,HIGH);
digitalWrite(gledPin,LOW);
tone(buzzer,freq);
delay(T);
noTone(buzzer);
delay(T);
}

else  {


digitalWrite(gledPin,HIGH);
digitalWrite(ledPin, LOW);
}

}
