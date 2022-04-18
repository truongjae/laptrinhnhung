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
void leftToRight(){
  for(int i=2;i<=9;i++){
      digitalWrite(i,HIGH); // BẬT BÓNG ĐÈN
      delay(100); // dưng tt 
      digitalWrite(i,LOW);
  }
}
void RightToLeft(){
     for(int i=9;i>=2;i--){
      digitalWrite(i,HIGH); // BẬT BÓNG ĐÈN
      delay(100); // dưng tt 
      digitalWrite(i,LOW);
  }
}
void LeftRightToMid(){
  int j=9;
  for(int i=2;i<=9;i++){
     digitalWrite(i,HIGH); // BẬT BÓNG ĐÈN
     delay(100); // dưng tt 
     digitalWrite(i,LOW);
     digitalWrite(j,HIGH); // BẬT BÓNG ĐÈN
     delay(100); // dưng tt 
     digitalWrite(j--,LOW);
     if(j==0) j=9;
  }
}
void loop() {
//  leftToRight();
//  RightToLeft();
//  LeftRightToMid();
}
