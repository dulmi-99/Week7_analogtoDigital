int R_in,B_in,G_in;
int led_r=9;
int led_g=10;
int led_b=11;
void setup() {
  Serial.begin(9600);
  pinMode(led_r,OUTPUT);
  pinMode(led_g,OUTPUT);
  pinMode(led_b,OUTPUT);

}

void loop() {
  R_in=analogRead(A0);
  B_in=analogRead(A1);
  G_in=analogRead(A2);
  
  Serial.print("R: ");
  Serial.println(R_in);
  Serial.print("G: ");
  Serial.println(G_in);
  Serial.print("B: ");
  Serial.println(B_in);
  
  analogWrite(led_r,map(R_in,0,1023,0,255));
  analogWrite(led_g,map(B_in,0,1023,0,255));
  analogWrite(led_b,map(G_in,0,1023,0,255));

}
