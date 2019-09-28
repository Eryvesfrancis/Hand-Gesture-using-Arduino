const int trigger1 = 2;
const int echo1 = 3; 
const int trigger2 = 4;
const int echo2 = 5;
long time_taken;
int dist,distL,distR;
 
void setup() {
Serial.begin(9600); 
  
pinMode(trigger1, OUTPUT); 
pinMode(echo1, INPUT); 
pinMode(trigger2, OUTPUT); 
pinMode(echo2, INPUT); 
pinMode(13,OUTPUT); 
pinMode(12,OUTPUT); 

}

void calculate_distance(int trigger, int echo)
{
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
digitalWrite(trigger, LOW);
delayMicroseconds(2);
digitalWrite(trigger, HIGH);
delayMicroseconds(10);
digitalWrite(trigger, LOW);
time_taken = pulseIn(echo, HIGH);
dist= time_taken*0.034/2;
if (dist>50)
dist = 50;
}
void loop() {
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
calculate_distance(trigger1,echo1);
distL =dist; 
calculate_distance(trigger2,echo2);
distR =dist; 
Serial.println(distL);
delay(200);
Serial.println(distR);
}

