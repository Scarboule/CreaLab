#include <Arduino.h>
#include <Ultrasonic.h> //include distance sensor library

#include "SoftwareSerial.h" //include mp3 librabries
#include "DFPlayer_Mini_mp3.h"

Ultrasonic ultrasonic1(3, 5);
SoftwareSerial mySerial(10, 11); // RX, TX

int buttonOld = 0; //var bouton
int buttonNew;
int swit;
int inputButton = 2;

int triggerEcho = 3; //var motor
int echo = 5;
int ENA = 4;
int ENB = 8;
int IN1 = 6;
int IN2 = 7;
int IN3 = 12;
int IN4 = 13;

int RX = 10; //var mp3
int TX = 11;

void setup(){
  Serial.begin(9600);
  mySerial.begin(9600);

  pinMode(triggerEcho, OUTPUT); //pinmode motor
  digitalWrite(triggerEcho, LOW);
  pinMode(echo, INPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(inputButton, INPUT_PULLUP); //pinmode button

  pinMode(RX, INPUT); //pinmode mp3
  pinMode(TX, OUTPUT);

  mp3_set_serial(mySerial); //mp3 settings
  mp3_set_volume(10);
  mp3_set_EQ(0);
}

void forward(){ //motor forward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);
}

void right(){ //motor right
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(ENA, HIGH);
  digitalWrite(ENB, HIGH);
}

void stop(){ //motor stop
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
}

void loop() {
  buttonNew = digitalRead(inputButton); //push button switch on/off
  if(buttonOld == 0 && buttonNew == 1){
    if(swit == 0){
      swit = 1;
    }
    else{
      swit = 0;
    }
  }
  buttonOld = buttonNew;

  if(swit == 0){ //movement instructions
    if(ultrasonic1.read() > 50){
      forward();
    }
    else{
      right();
    }

    if(ultrasonic1.read() < 20){ //mp3 instruction
      mp3_play();
    }

    delay(200); //delay for distance sensor
  }
  else{
    stop(); //if button state = off then stop everything
  }
}