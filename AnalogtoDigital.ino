int atdValue;  // to save ADC value
float voltage;  // to save calculated voltage value
int led = 9;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  Serial.println("UNO is ready");
}

void loop() {
  atdValue = analogRead(A0);  // convert A0 port to digital
  voltage = atdValue*(5.0/1023.0);  // calculate voltage according to digiatl
  // send the result to computer through serial
  Serial.print("Convert Value: ");
  Serial.println(atdValue);
  Serial.print("Voltage: ");
  Serial.println(voltage);
  analogWrite(led,map(atdValue,0,255,0,1023));
  delay(500);

}
