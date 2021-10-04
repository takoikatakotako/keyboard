#include "Keyboard.h"

bool currentState0;
bool beforeState0;
bool currentState1;
bool beforeState1;
bool currentState2;
bool beforeState2;
bool currentState3;
bool beforeState3;
bool currentState4;
bool beforeState4;
bool currentState5;
bool beforeState5;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);


  beforeState0 = HIGH;
  beforeState1 = HIGH;
  beforeState2 = HIGH;
  beforeState3 = HIGH;
  beforeState4 = HIGH;
  beforeState5 = HIGH;

  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);

  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // top left
  digitalWrite( 7, LOW );
  currentState0 = digitalRead(3);
  if (currentState0 != beforeState0) {
    if ( currentState0 == LOW) {
      Serial.println("7-3 Push!");
      // ∑
      Keyboard.press(0x82);
      Keyboard.press(0x77);
      Keyboard.release(0x82);
      Keyboard.release(0x77);
    } else {
      Serial.println("7-3 Release!");
    }
  }
  beforeState0 = currentState0;
  digitalWrite( 7, HIGH );

  // top center
  digitalWrite( 6, LOW );
  currentState1 = digitalRead(3);
  if (currentState1 != beforeState1) {
    if ( currentState1 == LOW) {
      Serial.println("6-3 Push!");
      // ∫
      Keyboard.press(0x82);
      Keyboard.press(0x62);
      Keyboard.release(0x82);
      Keyboard.release(0x62);
    } else {
      Serial.println("6-3 Release!");
    }
  }
  beforeState1 = currentState1;
  digitalWrite( 6, HIGH );

  // top right
  digitalWrite( 5, LOW );
  currentState2 = digitalRead(3);
  if (currentState2 != beforeState2) {
    if ( currentState2 == LOW) {
      Serial.println("5-3 Push!");
      // π
      Keyboard.press(0x82);
      Keyboard.press(0x70);
      Keyboard.release(0x82);
      Keyboard.release(0x70);
    } else {
      Serial.println("5-3 Release!");
    }
  }
  beforeState2 = currentState2;
  digitalWrite( 5, HIGH );


  // bottom left
  digitalWrite( 7, LOW );
  currentState3 = digitalRead(4);
  if (currentState3 != beforeState3) {
    if ( currentState3 == LOW) {
      Serial.println("7-4 Push!");
      // µ
      Keyboard.press(0x82);
      Keyboard.press(0x6d);
      Keyboard.release(0x82);
      Keyboard.release(0x6d);
    } else {
      Serial.println("7-4 Release!");
    }
  }
  beforeState3 = currentState3;
  digitalWrite( 7, HIGH );


  // bottom center
  digitalWrite( 6, LOW );
  currentState4 = digitalRead(4);
  if (currentState4 != beforeState4) {
    if ( currentState4 == LOW) {
      Serial.println("6-4 Push!");
      // ∞
      Keyboard.press(0x82);
      Keyboard.press(0x35);
      Keyboard.release(0x82);
      Keyboard.release(0x35);
    } else {
      Serial.println("6-4 Release!");
    }
  }
  beforeState4 = currentState4;
  digitalWrite( 6, HIGH );


  // bottom right
  digitalWrite( 5, LOW );
  currentState5 = digitalRead(4);
  if (currentState5 != beforeState5) {
    if ( currentState5 == LOW) {
      Serial.println("5-4 Push!");
      // ∂
      Keyboard.press(0x82);
      Keyboard.press(0x64);
      Keyboard.release(0x82);
      Keyboard.release(0x64);
    } else {
      Serial.println("5-4 Release!");
    }
  }
  beforeState5 = currentState5;
  digitalWrite( 5, HIGH );
}
