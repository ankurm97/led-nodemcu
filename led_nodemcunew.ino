#define LED D8
void setup() {
pinMode(LED,OUTPUT);
}

void loop() {
digitalWrite(LED,HIGH);
delay(2000);
digitalWrite(LED,LOW);
delay(2000);
}
