int atdValue;  // to save ADC value
int led = 9;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  Serial.println("UNO is ready");
}

void loop() {
  atdValue = analogRead(A0);  // convert A0 port to digital
  // send the result to computer through serial
  Serial.print("Convert Value: ");
  Serial.println(atdValue);
  //analogWrite(led,map(atdValue,0,255,0,1023));
  if (atdValue>500){
    digitalWrite(led,HIGH);
    }
  else{
    digitalWrite(led,LOW);
    }

}
