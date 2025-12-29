#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

const int gaspin=A0;
const int buzzpin=2;
const int ledpin=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(gaspin,INPUT);
  pinMode(buzzpin,OUTPUT);
  pinMode(ledpin,OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int gasvalue=analogRead(gaspin);
  int gaslevel=map(gasvalue,0,1023,0,100);
  Serial.print("gas level=");
  Serial.print(gaslevel);
  Serial.println(" %");
  if(gaslevel>=20){
    digitalWrite(buzzpin,HIGH); 
    digitalWrite(ledpin,HIGH);
    lcd.setCursor(0,0);
    lcd.print("GasStatus:DANGER");
  }
  else{
    digitalWrite(buzzpin,LOW);
    digitalWrite(ledpin,LOW);
    lcd.setCursor(0,0);
    lcd.print("Gas Status: SAFE");
  }
  
  delay(400);

}
