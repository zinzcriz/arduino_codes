void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(500);

}
