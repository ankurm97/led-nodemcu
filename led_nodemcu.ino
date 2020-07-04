#define LED 8
#define Switch 9
void setup() {
pinMode(LED,OUTPUT);
pinMode(Switch,INPUT);
}
void loop() {  
int val;
val = digitalRead(Switch);
digitalWrite(LED,val);
}
