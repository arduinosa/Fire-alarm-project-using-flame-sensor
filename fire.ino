 const int BuzzerPin = 9;   // ~(PWM)</pre>
const int FlamePin  = A0;
void setup ()
{
pinMode(BuzzerPin, OUTPUT);
Serial.begin(9600);
}
 
void loop ()
{
 
int sensorReading = analogRead(FlamePin);
Serial.println(sensorReading);
if (sensorReading < 50) {
analogWrite(BuzzerPin, 255);      // Almost any value can be used except 0 and 255
delay(500);
analogWrite(BuzzerPin, 155);
delay(500);
analogWrite(BuzzerPin, 255);
delay(500);
analogWrite(BuzzerPin, 155);
delay(500);
}
else {
analogWrite(BuzzerPin, 0);       // 0 turns it off
}
 
}
