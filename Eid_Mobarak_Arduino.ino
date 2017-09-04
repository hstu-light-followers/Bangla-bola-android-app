

// include the library
#include <LiquidCrystal.h>

// initialize the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int x = 1;
// the 8 arrays that form each segment of the custom numbers
byte TLE[8] = 
{
B10000,
B11111,
B01111,
B00000,
B01111,
B11111,
B11011,
B11111

};
byte TME[8] =
{
B00000,
B00000,
B10000,
B10000,
B11111,
B11100,
B01110,
B00110
};
byte TMME[8] =
{
  B00000,
  B00000, 
  B00000,
  B00000,
  B11111,
  B00110,
  B00110,
  B00110,

};
byte TRE[8] =
{
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B00000,
  B00000,
  B00000
};
byte BLE[8] =
{
B01110,
B00000,
B00000,
B00001,
B00011,
B00110,
B01111,
B11111

};
byte BME[8] =
{
B00110,
B01100,
B11000,
B10000,
B00000,
B00000,
B11111,
B11111

};
byte BMME[8] =
{
B00110,
B00110,
B00110,
B00110,
B00111,
B00111,
B00110,
B00100
};
byte BRE[8] =
{
B00011,
B00111,
B01111,
B11011,
B10011,
B00011,
B00011,
B00001
};

void customEID()
{
  lcd.setCursor(1,1);
  lcd.write(1);
  lcd.write(2);
  lcd.write(3);
  lcd.write(4);
  lcd.setCursor(1, 2);
  lcd.write(5);
  lcd.write(6);
  lcd.write(7);
  lcd.write(8);
}
byte AKAR[8] = 
{
B11111,
B00001,
B00011,
B00110,
B01100,
B11000,
B11000,
B11000


};
byte AKAR2[8] =
{
B11000,
B11000,
B11110,
B11111,
B11011,
B11111,
B01110,
B00000

};
byte MO[8] =
{
B11111,
B01100,
B00110,
B00011,
B01111,
B11011,
B11111,
B01110
};
byte MO2[8] =
{
B11111,
B00000,
B00000,
B00000,
B11000,
B11100,
B00110,
B00011
};
byte VER[8] =
{
B11111,
B11000,
B11000, 
B11000,  
B11000,  
B11000,  
B11000,  
B11000
};
byte VER2[8] =
{
B11000,
B11000,
B11000,
B11000,
B11000,
B11000,
B01000,
B00000
};
byte BO[8] =
{
B11000,
B01100,
B00110,
B00011,
B00001,
B00000,
B00000,
B00000
};
byte BO2[8] =
{
B11000,
B01100,
B00110,
B00011,
B11001,
B11000,
B00000,
B00000
};
byte LT[8] = 
{
  B00111,
  B01111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte UB[8] =
{
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte RT[8] =
{
  B11100,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte LL[8] =
{
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B01111,
  B00111
};
byte LB[8] =
{
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111
};
byte LR[8] =
{
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11110,
  B11100
};
byte UMB[8] =
{
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111
};
byte LMB[8] =
{
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111
};

void customMOBARAK()
{
  lcd.setCursor(0,1);
  lcd.write(1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
  lcd.write(5);
  lcd.write(1);
  lcd.write(5);
  lcd.write(5);
  lcd.write(1);
  lcd.write(5);
  lcd.write(1);
  lcd.write(5);
  lcd.write(3);
  lcd.setCursor(0, 2);
  lcd.write(2);
  lcd.write(254);
  lcd.write(254);
  lcd.write(6);
  lcd.write(6);
  lcd.write(7);
  lcd.write(6);
  lcd.write(6);
  lcd.write(8);
  lcd.write(6);
  lcd.write(7);
  lcd.write(6);
}
void custom0O()
{ // uses segments to build the number 0
  lcd.setCursor(x, 2); 
  lcd.write(8);  
  lcd.write(1); 
  lcd.write(2);
  lcd.setCursor(x, 3); 
  lcd.write(3);  
  lcd.write(4);  
  lcd.write(5);
}

void customA()
{
  lcd.setCursor(x,0);
  lcd.write(8);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x, 1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(255);
}

void customB()
{
  lcd.setCursor(x,0);
  lcd.write(255);
  lcd.write(6);
  lcd.write(5);
  lcd.setCursor(x, 1);
  lcd.write(255);
  lcd.write(7);
  lcd.write(2);
}

void customD()
{
  lcd.setCursor(x, 1); 
  lcd.write(255);  
  lcd.write(1); 
  lcd.write(2);
  lcd.setCursor(x, 2); 
  lcd.write(255);  
  lcd.write(4);  
  lcd.write(5);
}

void customE()
{
  lcd.setCursor(x,1);
  lcd.write(255);
  lcd.write(6);
  lcd.write(6);
  lcd.setCursor(x, 2);
  lcd.write(255);
  lcd.write(7);
  lcd.write(7); 
}

void customI()
{
  lcd.setCursor(x,1);
  lcd.write(1);
  lcd.write(255);
  lcd.write(1);
  lcd.setCursor(x,2);
  lcd.write(4);
  lcd.write(255);
  lcd.write(4);
}


void customK()
{
  lcd.setCursor(x,2);
  lcd.write(255);
  lcd.write(4);
  lcd.write(5);
  lcd.setCursor(x,3);
  lcd.write(255);
  lcd.write(254);
  lcd.write(2); 
}

void customM()
{
  lcd.setCursor(x,0);
  lcd.write(8);
  lcd.write(3);
  lcd.write(5);
  lcd.write(2);
  lcd.setCursor(x,1);
  lcd.write(255);
  lcd.write(254);
  lcd.write(254);
  lcd.write(255);
}

void customR()
{
  lcd.setCursor(x,2);
  lcd.write(255);
  lcd.write(6);
  lcd.write(2);
  lcd.setCursor(x,3);
  lcd.write(255);
  lcd.write(254);
  lcd.write(2); 
}

void customU()
{
  lcd.setCursor(x, 0); 
  lcd.write(255);  
  lcd.write(254); 
  lcd.write(255);
  lcd.setCursor(x, 1); 
  lcd.write(3);  
  lcd.write(4);  
  lcd.write(5);
}

void letters1()
{
  customEID();
}
void letters2()
{
  customMOBARAK();
}
void letters3()
{
  x=1;
  customE();
  x = x + 4;
  customI();
  x = x + 4;
  customD();
  x = x + 4;
}
void letters4()
{
  x=0;
  customM();
  x = x + 5;
  customU();
  x = x + 4;
  customB();
  x = x + 4;
  customA();
  x=3;
  customR();
  x = x + 4;
  custom0O();
  x = x + 4;
  customK();
  x = x + 4;
}
void setup()
{
  // assignes each segment a write number
 
  lcd.begin(20, 4);
  
}
void stage1(){
   lcd.createChar(1,TLE);
  lcd.createChar(2,TME);
  lcd.createChar(3,TMME);
  lcd.createChar(4,TRE);
  lcd.createChar(5,BLE);
  lcd.createChar(6,BME);
  lcd.createChar(7,BMME);
  lcd.createChar(8,BRE);
  }
void stage2()
{
  // assignes each segment a write number
  lcd.createChar(1,AKAR);
  lcd.createChar(2,AKAR2);
  lcd.createChar(3,MO);
  lcd.createChar(4,MO2);
  lcd.createChar(5,VER);
  lcd.createChar(6,VER2);
  lcd.createChar(7,BO);
  lcd.createChar(8,BO2);
}  
void stage3()
{
  // assignes each segment a write number
  lcd.createChar(8,LT);
  lcd.createChar(1,UB);
  lcd.createChar(2,RT);
  lcd.createChar(3,LL);
  lcd.createChar(4,LB);
  lcd.createChar(5,LR);
  lcd.createChar(6,UMB);
  lcd.createChar(7,LMB);
}
void loop()
{
  stage1();
  letters1();
  scroll();
  stage2();
  letters2();
  scroll();
  stage3();
  letters3();
  scroll();
  stage3();
  letters4();
  scroll();
 
}

void scroll(){
  for (int positionCounter = 0; positionCounter < 4; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(800);
  }
  delay(2500);
 for (int positionCounter = 0; positionCounter < 4; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(800);
  }
  delay(2500);
  lcd.clear();
  delay(1000);
  }

