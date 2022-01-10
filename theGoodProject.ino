int DO = 1;
int RE = 1;
int MI = 1;
int FA = 1;
int SOL = 1;
int LA = 1;
int SI = 1;
int DO1 = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  DO = digitalRead(2);
  RE = digitalRead(3);
  MI = digitalRead(4);
  FA = digitalRead(5);
  SOL = digitalRead(6);
  LA = digitalRead(7);
  SI = digitalRead(8);
  DO1 = digitalRead(9);

  if(DO == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("DO");
    tone(13, 523, 300); 
  }
  if(RE == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("RE");
    tone(13, 587, 300);
  }
  if(MI == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("MI");
    tone(13, 659, 300);
  }
  if(FA == 1) {
//Serial.println("Laser");
  }
  else {
    Serial.println("FA");
    tone(13, 698, 300);
  }
  if(SOL == 1) {
//Serial.println("Laser");
  }
  else {
    Serial.println("SOL");
    tone(13, 783, 300);
  }
  if(LA == 1) {
   // Serial.println("Laser");
  }
  else {
    Serial.println("LA");
    tone(13, 880, 300);
  }
  if(SI == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("SI");
    tone(13, 987, 300);
  }
   if(DO1 == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("DO1");
    tone(13, 1046, 300);
  }
}
