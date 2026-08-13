#define PIEZO_BUZZER 7

void setup() {
  pinMode(5, INPUT_PULLUP);
}

void loop(){
  if(digitalRead(5)== 0) tone(PIEZO_BUZZER, 262, 1000);
  else noTone(PIEZO_BUZZER);
}