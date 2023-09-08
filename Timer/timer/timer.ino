#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

const int start_pause_button = 10;
const int reset_button = 11;
const int show_button = 12;

void setup()
{
 lcd.init();
 lcd.backlight();

 pinMode(start_pause_button, INPUT_PULLUP);
 pinMode(reset_button, INPUT_PULLUP);
 pinMode(show_button, INPUT_PULLUP);

}

int current_time = 30;
void loop()
{
  lcd.setCursor(1,1);
  lcd.print(digitalRead(start_pause_button));
  lcd.setCursor(2,1);
  lcd.print(digitalRead(reset_button));
  lcd.setCursor(3,1);
  lcd.print(digitalRead(show_button));
  
}


void Start_Pause(){
  if(current_time == 30){
    //Srart timer
    current_time--;
    delay(1000);

  }
  else{
    //Pause Timer

  }
}

void Reset(){

}

void ShowTime(){

}
