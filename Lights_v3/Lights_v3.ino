const int button1Pin = 2;  // pushbutton 1 pin aka person blue
const int button2Pin = 3;  // pushbutton 2 pin aka person red
const int ledPin =  13;    // Person Blue's Pin
const int redPin = 12; // Person Red's Pin
const int countPin = 11; // Countdown Pin
const int isOccupied = 0; // if const = 0, then no one has clicked button. if const
// = 1 then button is pressed

void setup()
{
  // Set up the pushbutton pins to be an input:
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);

  // Set up the LED pins to be outputs:
  pinMode(ledPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode (countPin, OUTPUT);

digitalWrite(countPin, HIGH);
delay(3000);
digitalWrite(countPin, LOW);
}


void loop()
{
  int button1State, button2State;  // variables to hold the pushbutton states

  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  if (button1State == LOW)                                                          
  {
    if (isOccupied == 0)
    {
    const int isOccupied = 1;
    digitalWrite(ledPin, HIGH);  // turn the LED on
    }
  }
  else
  {
    digitalWrite(ledPin, LOW);  // turn the LED off
    
  }


  if (button2State == LOW) 
                                                        
  {
    if (isOccupied == 0);
    {
    const int isOccupied = 1;
    digitalWrite(redPin, HIGH);  // turn the LED on
    }
  }
  
  else
  {
    digitalWrite(redPin, LOW);  // turn the LED off
    
  }
  
}

