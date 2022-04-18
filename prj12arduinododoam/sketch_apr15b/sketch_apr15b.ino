#include<DHT.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2); // khoi tao vs cac chan
const int DHTPIN=8; // doc du lieu tu dht11 o chan 2
const int DHTTYPE=DHT11; // khai bao loai cam bien
DHT dht(DHTPIN,DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();// khoi dong cam bien
}

void loop() {
  float h = dht.readHumidity(); // doc do am
  float t = dht.readTemperature(); // doc nhiet do
  lcd.begin(16,2);
  lcd.print("Nhiet do: ");// hien thi nhiet do
  lcd.print(t);
  lcd.setCursor(0,1);
  lcd.print("Do am: ");// hien thi do am
  lcd.print(h);
  delay(5000);
}
