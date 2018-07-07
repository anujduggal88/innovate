/*
Flicker flame electronic candle snuffer
Slider2732 - January 2017

*/

int sensorPin = A0;   // input pin from the microphone circuit
int ledPin = 13;      // LED output pin, also most Arduino's have an onboard LED on pin 13
int ledPin1 = 12; 
int ledPin2 = 10; 
int sensorValue = 0;  // variable to store the value coming from the microphone input
int on = 0;           // to store the LED state

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600); // serial output will show the microphone input readings.
}

void loop() 
{

  delay(100);                                 // a small delay between readings 
  sensorValue = analogRead(sensorPin);        // read the mic value
  Serial.println(sensorValue);                // out put that over the serial port
  if(sensorValue >=600) 
   { 
    digitalWrite(ledPin, LOW);               // turn LED off
     digitalWrite(ledPin1, LOW);   
      digitalWrite(ledPin2, LOW);   
    
   delay(10000);                               // delay for a second in case of a long breath !
   }
  
   digitalWrite(ledPin, HIGH);             // turn LED on
                               // delay for a second, same as above
                               digitalWrite(ledPin1, HIGH);    
                               digitalWrite(ledPin2, HIGH);    
  

}
