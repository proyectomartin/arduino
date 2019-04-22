//www.elegoo.com
//2016.12.08

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0; //tengo dudas sobre esta variable. No sé para que sirve. Ademas, al quitarla, no modifica el comportamiento del montaje.

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
