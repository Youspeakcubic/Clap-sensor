//www.elegoo.com
//2016.12.08
int red = 8;
#define blue 9
#define green 7
int sound =10;
int t = 300;
bool trig = false;
bool status; 
void setup()
{
Serial.begin(74880);
  pinMode(sound,INPUT);
  pinMode(red,OUTPUT);
  digitalWrite(red, 0);
  digitalWrite(green,0);
  digitalWrite(blue,0);
}
void loop(){
  Serial.print(trig);
  trig = digitalRead(sound);
  if (trig == 1 && status == true){
     digitalWrite(red, LOW);
     Serial.print("stat false");
     status = false;
     delay(5000);
  }
  else if (trig == 1 && status == false){
     digitalWrite(red, HIGH);
     digitalWrite(green, 0);
     digitalWrite(blue,0);
     Serial.print("stat true");
     status = true;
     delay(5000);
   }
}
