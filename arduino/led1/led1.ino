//here we are declaring, its a good practice.
int led1 = 7; //this helps u to know which pin u connected ur led1


void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7, HIGH);
delay(50);

digitalWrite(7, LOW);
delay(50);

}
