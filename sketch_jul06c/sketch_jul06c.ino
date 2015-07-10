int led=13;
int pin=7;
int value=0;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(pin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
value = digitalRead(pin);
digitalWrite(led,value);
}
