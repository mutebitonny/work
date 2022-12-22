//this code is for arduino bulb wc is on port 13,,, just connect the arduino only
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
delay(600);

digitalWrite(13, LOW);
delay(600);

}
