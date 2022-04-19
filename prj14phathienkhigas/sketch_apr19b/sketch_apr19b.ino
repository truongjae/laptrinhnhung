#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int Gas =9;
int denxanh = 6;
int dendo=7;
void setup() {
    pinMode(Gas,INPUT);
    pinMode(denxanh,INPUT);
    pinMode(dendo,INPUT);
}

void loop() {
  if(digitalRead(Gas) == HIGH){
    lcd.setCursor(0,0);
    lcd.print("Co phat hien Gas");
    digitalWrite(dendo,HIGH);
    digitalWrite(denxanh,LOW);
  }
  else{
    lcd.setCursor(0,0);
    lcd.print("No find");
    lcd.print(" Gas");
    digitalWrite(denxanh,HIGH);
    digitalWrite(dendo,LOW);
  }
  delay(500);
  lcd.clear();
}
