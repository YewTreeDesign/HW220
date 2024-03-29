// Special thanks to this tutorial 
// Arduino Micro Piano
// http://educ8s.tv/arduino-micro-piano/

#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 493
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0
#define ACTIVATED LOW 
int tempo =135;
int melody[]={
    // Vamire Killer, from castlevania
  // Score available at https://musescore.com/user/28972071/scores/5425616
  
  NOTE_E4,8, NOTE_FS4,16, NOTE_G4,16, NOTE_A4,16,
  
  NOTE_B4,-8, NOTE_E4,-8, NOTE_B4,8, NOTE_A4,16, NOTE_D5,-4, //7
  NOTE_E5,16, NOTE_E5,8, NOTE_D5,16, REST,16, NOTE_CS5,-4, NOTE_E4,8, NOTE_FS4,16, NOTE_G4,16, NOTE_A4,16,
  NOTE_B4,-8, NOTE_E4,-8, NOTE_B4,8, NOTE_A4,16, NOTE_D4,-4,
  REST,8, NOTE_E5,8, REST,16, NOTE_B5,16, REST,8, NOTE_AS5,16, NOTE_B5,16, NOTE_AS5,16, NOTE_G5,16, REST,4,

  NOTE_B5,8, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_AS5,16, NOTE_A5,16, REST,16, NOTE_B5,16, NOTE_G5,16, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_B5,16, NOTE_A5,16, NOTE_G5,16,//11
  REST,8, NOTE_E5,8, REST,16, NOTE_B5,16, REST,8, NOTE_AS5,16, NOTE_B5,16, NOTE_AS5,16, NOTE_G5,16, REST,4,
  NOTE_B5,8, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_AS5,16, NOTE_A5,16, REST,16, NOTE_B5,16, NOTE_G5,16, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_B5,16, NOTE_A5,16, NOTE_G5,16,

  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, NOTE_E4,8, //14
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, REST,8,
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, NOTE_E4,8,
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_CS5,-8, NOTE_DS5,8,

  NOTE_E5,16, NOTE_E5,16, NOTE_E4,16, NOTE_E4,-2,//18
  NOTE_C4,8, NOTE_C4,8, NOTE_E4,16, NOTE_G4,-8, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,16, NOTE_A4,-8,
  NOTE_E5,16, NOTE_E5,16, NOTE_E4,16, NOTE_E4,-2,
  NOTE_C4,8, NOTE_C4,8, NOTE_E4,16, NOTE_G4,-8, NOTE_D4,8, NOTE_D4,8, NOTE_B3,16, NOTE_D4,-8,

  //repeats a second time

  NOTE_E5,16, NOTE_E5,8, NOTE_D5,16, REST,16, NOTE_CS5,-4, NOTE_E4,8, NOTE_FS4,16, NOTE_G4,16, NOTE_A4,16,
  
  NOTE_B4,-8, NOTE_E4,-8, NOTE_B4,8, NOTE_A4,16, NOTE_D5,-4, //7
  NOTE_E5,16, NOTE_E5,8, NOTE_D5,16, REST,16, NOTE_CS5,-4, NOTE_E4,8, NOTE_FS4,16, NOTE_G4,16, NOTE_A4,16,
  NOTE_B4,-8, NOTE_E4,-8, NOTE_B4,8, NOTE_A4,16, NOTE_D4,-4,
  REST,8, NOTE_E5,8, REST,16, NOTE_B5,16, REST,8, NOTE_AS5,16, NOTE_B5,16, NOTE_AS5,16, NOTE_G5,16, REST,4,

  NOTE_B5,8, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_AS5,16, NOTE_A5,16, REST,16, NOTE_B5,16, NOTE_G5,16, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_B5,16, NOTE_A5,16, NOTE_G5,16,//11
  REST,8, NOTE_E5,8, REST,16, NOTE_B5,16, REST,8, NOTE_AS5,16, NOTE_B5,16, NOTE_AS5,16, NOTE_G5,16, REST,4,
  NOTE_B5,8, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_AS5,16, NOTE_A5,16, REST,16, NOTE_B5,16, NOTE_G5,16, NOTE_B5,16, NOTE_AS5,16, REST,16, NOTE_B5,16, NOTE_A5,16, NOTE_G5,16,

  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, NOTE_E4,8, //14
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, REST,8,
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_G4,-8, NOTE_E4,8,
  NOTE_DS4,-8, NOTE_FS4,-8, NOTE_C5,8, NOTE_B4,-8, NOTE_CS5,-8, NOTE_DS5,8,

  NOTE_E5,16, NOTE_E5,16, NOTE_E4,16, NOTE_E4,-2,//18
  NOTE_C4,8, NOTE_C4,8, NOTE_E4,16, NOTE_G4,-8, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,16, NOTE_A4,-8,
  NOTE_E5,16, NOTE_E5,16, NOTE_E4,16, NOTE_E4,-2,
  NOTE_C4,8, NOTE_C4,8, NOTE_E4,16, NOTE_G4,-8, NOTE_D4,8, NOTE_D4,8, NOTE_B3,16, NOTE_D4,-8,
  
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;
const int PIEZO = 11;
const int LED = 13;


const int BUTTON_E = 8;
const int BUTTON_F = 7;
const int BUTTON_G = 6;
const int BUTTON_A = 5;
const int BUTTON_B = 3;


// this calculates the duration of a whole note in ms




void setup()


{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_E, INPUT);
  digitalWrite(BUTTON_E,HIGH);
  pinMode(BUTTON_F, INPUT);
  digitalWrite(BUTTON_F,HIGH);
  pinMode(BUTTON_G, INPUT);
  digitalWrite(BUTTON_G,HIGH);
  pinMode(BUTTON_A, INPUT);
  digitalWrite(BUTTON_A,HIGH);
  pinMode(BUTTON_B, INPUT);
  digitalWrite(BUTTON_B,HIGH);
  
  digitalWrite(LED,LOW);
}

void loop()
{
   while(digitalRead(BUTTON_E) == ACTIVATED)
 for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }
    if(digitalRead(BUTTON_E) == ACTIVATED)
      delay(noteDuration);
     noTone(PIEZO);
      tone(PIEZO, melody[thisNote], noteDuration * 0.9);
 }
  while(digitalRead(BUTTON_E) == ACTIVATED)
  {
   
    digitalWrite(LED,HIGH);
   
  }

  while(digitalRead(BUTTON_F) == ACTIVATED)
  {
     tone(PIEZO, NOTE_CS5,-4);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_G) == ACTIVATED)
  {
    tone(PIEZO,NOTE_D5,16);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_A) == ACTIVATED)
  {
     tone(PIEZO, NOTE_E5,8);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_B) == ACTIVATED)
  {
    tone(PIEZO, NOTE_E5,16);
   
    digitalWrite(LED,HIGH);
  }

  noTone(PIEZO);
  digitalWrite(LED,LOW);

}
