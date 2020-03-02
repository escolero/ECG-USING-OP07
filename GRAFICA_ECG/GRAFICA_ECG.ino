int in = A0;
float y =0.0;
float alpha=0.2;
float s=y;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
double val=analogRead(A0);
float ecg= ((val*1024)/5);
s=(alpha*val)+((1-alpha)*s);
Serial.println(s);
delay(1);
}
