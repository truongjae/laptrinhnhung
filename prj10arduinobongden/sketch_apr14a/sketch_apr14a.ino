#include <Arduino.h>
void setup();
void loop();
void setup() {
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
   pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  digitalWrite(2,HIGH); // BẬT BÓNG ĐÈN
  delay(100); // dưng tt 
   digitalWrite(2,LOW);
   
   digitalWrite(3,HIGH); // BẬT BÓNG ĐÈN
  delay(100); // dưng tt 
   digitalWrite(3,LOW);

    digitalWrite(4,HIGH); // BẬT BÓNG ĐÈN
  delay(100); // dưng tt 
   digitalWrite(4,LOW);

    digitalWrite(5,HIGH); // BẬT BÓNG ĐÈN
  delay(100); // dưng tt 
   digitalWrite(5,LOW);

    digitalWrite(6,HIGH); // BẬT BÓNG ĐÈN
  delay(100); // dưng tt 
   digitalWrite(6,LOW);

    digitalWrite(7,HIGH); // BẬT BÓNG ĐÈN
  delay(100); // dưng tt 
   digitalWrite(7,LOW);

    digitalWrite(8,HIGH); // BẬT BÓNG ĐÈN
  delay(100); // dưng tt 
   digitalWrite(8,LOW);

    digitalWrite(9,HIGH); // BẬT BÓNG ĐÈN
  delay(100); // dưng tt 
   digitalWrite(9,LOW);
}
