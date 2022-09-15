const int pinLDR = 34;
#define PIN_LM35 35

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int m = analogRead(pinLDR);
  Serial.println(m);
  //Serial.println(analogRead(PIN_LM35)*0.1221);
  delay(100);

}
