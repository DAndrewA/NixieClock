/*
Idea to do array display?
It will be nested for loops in a 24hr format?
*/

int latchPin = 8;
int clockPin = 12;
int dataPin = 11;

//Setting up arrays for counting

//byte ouput;
//byte hour;
byte hourTen;
byte hourUnit;
byte minTen;
byte minUnit;
byte secTen;
byte secUnit;

//byte outputArray[6];
//byte hourArray[24];
byte hourTenArray[10];
byte hourUnitArray[10];
byte minTenArray[10];
byte minUnitArray[10];
byte secTenArray[10];
byte secUnitArray[10];



void setup() {

  pinMode(latchPin, OUTPUT);

  
  //Serial.begin(9600);

  //Set up Arrays to contain the correct numbers 0-10 in order
  //Consider combining hour arrays as it counts to 23, not a multpile of 10
  
/*  
  hourArray[0] = 0x00;
  hourArray[1] = 0x08;
  hourArray[2] = 0x02;
  hourArray[3] = 0x0A;
  hourArray[4] = 0x01;
  hourArray[5] = 0x09;
  hourArray[6] = 0x03;
  hourArray[7] = 0x0B;
  hourArray[8] = 0x04;
  hourArray[9] = 0x0C;
  hourArray[10] = 0x80;
  hourArray[11] = 0x88;
  hourArray[12] = 0x82;
  hourArray[13] = 0x8A;
  hourArray[14] = 0x81;
  hourArray[15] = 0x89;
  hourArray[16] = 0x83;
  hourArray[17] = 0x8B;
  hourArray[18] = 0x84;
  hourArray[19] = 0x8C;
  hourArray[20] = 0x20;
  hourArray[21] = 0x28;
  hourArray[22] = 0x22;
  hourArray[23] = 0x2A;
  */
  
  hourTenArray[0] = 0x0;
  hourTenArray[1] = 0x8;
  hourTenArray[2] = 0x2;
  hourTenArray[3] = 0xA;
  hourTenArray[4] = 0x1;
  hourTenArray[5] = 0x9;
  hourTenArray[6] = 0x3;
  hourTenArray[7] = 0xB;
  hourTenArray[8] = 0x4;
  hourTenArray[9] = 0xC;

  hourUnitArray[0] = 0x0;
  hourUnitArray[1] = 0x8;
  hourUnitArray[2] = 0x2;
  hourUnitArray[3] = 0xA;
  hourUnitArray[4] = 0x1;
  hourUnitArray[5] = 0x9;
  hourUnitArray[6] = 0x3;
  hourUnitArray[7] = 0xB;
  hourUnitArray[8] = 0x4;
  hourUnitArray[9] = 0xC;

  minTenArray[0] = 0x0;
  minTenArray[1] = 0x8;
  minTenArray[2] = 0x2;
  minTenArray[3] = 0xA;
  minTenArray[4] = 0x1;
  minTenArray[5] = 0x9;
  minTenArray[6] = 0x3;
  minTenArray[7] = 0xB;
  minTenArray[8] = 0x4;
  minTenArray[9] = 0xC;

  minUnitArray[0] = 0x0;
  minUnitArray[1] = 0x8;
  minUnitArray[2] = 0x2;
  minUnitArray[3] = 0xA;
  minUnitArray[4] = 0x1;
  minUnitArray[5] = 0x9;
  minUnitArray[6] = 0x3;
  minUnitArray[7] = 0xB;
  minUnitArray[8] = 0x4;
  minUnitArray[9] = 0xC;

  secTenArray[0] = 0x0;
  secTenArray[1] = 0x8;
  secTenArray[2] = 0x2;
  secTenArray[3] = 0xA;
  secTenArray[4] = 0x1;
  secTenArray[5] = 0x9;
  secTenArray[6] = 0x3;
  secTenArray[7] = 0xB;
  secTenArray[8] = 0x4;
  secTenArray[9] = 0xC;

  secUnitArray[0] = 0x0;
  secUnitArray[1] = 0x8;
  secUnitArray[2] = 0x2;
  secUnitArray[3] = 0xA;
  secUnitArray[4] = 0x1;
  secUnitArray[5] = 0x9;
  secUnitArray[6] = 0x3;
  secUnitArray[7] = 0xB;
  secUnitArray[8] = 0x4;
  secUnitArray[9] = 0xC;

  outputArray[0] = 0x0;
  outputArray[1] = 0x0;
  outputArray[2] = 0x0;
  outputArray[3] = 0x0;
  outputArray[4] = 0x0;
  outputArray[5] = 0x0;

  
}

void loop() {

//Maybe do some clever stuff within the for loops and have a master array updated from the other arrays? Consider converting to pointers at some point to save memory?

  //Nested for loops for original config - Potentially use this to count through all numbers?
  for (i = 0, i =< 2, i++){
    //increment hr ten
    for (i = 0, i < 10, i++){
      //increment hr unit
      for (i = 0, i < 6, i++){
        //increment min ten
        for (i = 0, i < 10, i++){
          //increment min unit
          for (i = 0, i < 6, i++){
            //increment sec ten
            for (i = 0, i, 10, i++){
              //increment sec unit
              secUnit = secUnitArray[i];
              digitalWrite(latchPin, 0);
              shiftOut(dataPin, clockPin, secUnit)
            }
          }
        }
      }
    }
  }
  /*
  for (i = 0, i < 24, i++){
    //increment hours
    for (i = 0, i < 6, i++){
      //increment min ten
      for (i = 0, i < 10, i++){
        //increment min unit
        for (i = 0, i < 6, i++){
          //increment sec ten
          for (i = 0, i, 10, i++){
            //increment sec unit
          }
        }
      }
    }
  }
  */


}

// the heart of the program
//Will probably need to change this function, need to count out 24 bits
//MSB will be hr tens, LSB will be second units
void shiftOut(int myDataPin, int myClockPin, byte myDataOut) {

  // This shifts 8 bits out MSB first,

  //on the rising edge of the clock,

  //clock idles low

  //internal function setup

  int i=0;

  int pinState;

  pinMode(myClockPin, OUTPUT);

  pinMode(myDataPin, OUTPUT);

  //clear everything out just in case to

  //prepare shift register for bit shifting

  digitalWrite(myDataPin, 0);

  digitalWrite(myClockPin, 0);

  //for each bit in the byte myDataOut&#xFFFD;

  //NOTICE THAT WE ARE COUNTING DOWN in our for loop

  //This means that %00000001 or "1" will go through such

  //that it will be pin Q0 that lights.

  for (i=7; i>=0; i--)  {

    digitalWrite(myClockPin, 0);

    //if the value passed to myDataOut and a bitmask result

    // true then... so if we are at i=6 and our value is

    // %11010100 it would the code compares it to %01000000

    // and proceeds to set pinState to 1.

    if ( myDataOut & (1<<i) ) {

      pinState= 1;

    }

    else {

      pinState= 0;

    }

    //Sets the pin to HIGH or LOW depending on pinState

    digitalWrite(myDataPin, pinState);

    //register shifts bits on upstroke of clock pin

    digitalWrite(myClockPin, 1);

    //zero the data pin after shift to prevent bleed through

    digitalWrite(myDataPin, 0);

  }

  //stop shifting

  digitalWrite(myClockPin, 0);
}



//Come up with a function to cycle all displays in order, maybe another at random?
