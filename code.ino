int inPin = A0;
int val;


void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  val = (analogRead(inPin));
  Serial.println(val);
  if(val >= 512){
    digitalWrite(LED_BUILTIN, HIGH);
    }
  
  else {
  digitalWrite(LED_BUILTIN, LOW);
  }
}


