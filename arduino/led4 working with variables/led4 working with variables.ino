// led in otherwise working with variables
int led = 8;
int dah = 500; //slow blinking
int dit = 100; //fast blinking 
int dey = 2000; //delay at the end of the everything before the loop starts again

//this is the out put . . . (dit dit dit) - - - (dah dah dah )  . . . (dit dit dit)
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(dit);

digitalWrite(led, LOW);
delay(dit);

  digitalWrite(led, HIGH);
  delay(dit);

digitalWrite(led, LOW);
delay(dit);

  digitalWrite(led, HIGH);
  delay(dit);

digitalWrite(led, LOW);
delay(dit);



  digitalWrite(led, HIGH);
  delay(dah);

digitalWrite(led, LOW);
delay(dah);

  digitalWrite(led, HIGH);
  delay(dah);

digitalWrite(led, LOW);
delay(dah);

  digitalWrite(led, HIGH);
  delay(dah);

digitalWrite(led, LOW);
delay(dah);




  digitalWrite(led, HIGH);
  delay(dit);

digitalWrite(led, LOW);
delay(dit);

  digitalWrite(led, HIGH);
  delay(dit);

digitalWrite(led, LOW);
delay(dit);

  digitalWrite(led, HIGH);
  delay(dit);

digitalWrite(led, LOW);
delay(dit);



delay(dey);



}
