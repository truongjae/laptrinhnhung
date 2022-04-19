#include<LiquidCrystal.h>
#define trigger 8
#define echo 9
  LiquidCrystal lcd(7,6,5,4,3,2);
  float time =0,kc=0;
void setup() {
     lcd.begin(16,2);
    pinMode(trigger,OUTPUT);
    pinMode(echo,OUTPUT);
    lcd.print("K/cach: ");
    lcd.setCursor(0,1);
    lcd.print("Cam bien sieu am");
    delay(2000);
    lcd.clear();
    lcd.print("IOT 4.0");
    delay(2000);
}

void loop() {
  lcd.clear();
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  time=pulseIn(echo,HIGH); //hảm đo độ rộng của xung
  kc=time*340/20000;
  lcd.clear();
  lcd.print("K.cach: ");
  lcd.print(kc);
  lcd.print("cm");
  lcd.setCursor(0,1);
  lcd.print("K.cach: ");
  lcd.print(kc/100);
  lcd.print("m");
  delay(1000);

  

}
