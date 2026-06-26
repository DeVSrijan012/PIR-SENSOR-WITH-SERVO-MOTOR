const int led = 8;
const int pir = 2;
int motion;
#include <Servo.h>

Servo myservo;



void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(pir, INPUT);
myservo.attach(9);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

motion = digitalRead(pir);
if(motion) {
  digitalWrite(led, HIGH);
  myservo.write(0);
  Serial.println("Motion Detected");
 }
else{
  digitalWrite(led, LOW);
  myservo.write(500);
  Serial.println("Motion Ended");
 }
delay(500);
}
