

int vibrator = 7;
int led1   = 1;
int led2   = 2;
int led3   = 3;
int dht11 = A1;
#define Buzzer 6
#define trigPin 11
#define echoPin 12
long duration;
int distance = 0;
void setup()
{   
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(Buzzer, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(vibrator, INPUT);
pinMode(dht11 ,INPUT );
Serial.begin(9600);
}
void loop()
{
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;
if (distance <= 10)
{
Serial.println(distance);
digitalWrite(Buzzer,LOW);
digitalWrite (led1, HIGH);
delay(distance);
digitalWrite(Buzzer,LOW);
delay(distance);
}
if ( distance <= 20 ){
  digitalWrite(Buzzer, LOW);
  digitalWrite(led2, HIGH);
  delay(distance);
  digitalWrite(Buzzer,LOW);
  delay(distance);
}
else if (distance > 20 ){
  digitalWrite( Buzzer, HIGH);
  digitalWrite(led3, HIGH);
}
   if (vibrator, HIGH){
    digitalWrite( Buzzer, HIGH);
    digitalWrite( led3, HIGH);
    delay(1000);
  }
}
 
