
#include <Keypad.h>

#include <Stepper.h>

#include <LiquidCrystal.h>
#define steps 360
  LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
  Stepper myStepper(steps,2,3,4,5);
int number;
String num="";
const byte rows=4;
const byte cols=4;
char keymap [rows][cols]={
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowpins[rows]={13,12,11,10};
byte colpins[cols]={9,8,7,6};
Keypad kpd = Keypad( makeKeymap(keymap), rowpins, colpins, rows, cols);


void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    lcd.begin(16,2);
    myStepper.setSpeed(80);
    for(int i=2;i<6;i++)
    {
      pinMode(i,OUTPUT);
    }
    pinMode(A0,OUTPUT);
    pinMode(A1,OUTPUT);
    pinMode(A2,OUTPUT);
    pinMode(A3,OUTPUT);
    pinMode(A4,OUTPUT);
    pinMode(A5,OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  }
