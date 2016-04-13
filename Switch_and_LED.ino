const int switchPin = 2;
int switchRead = 0;

void setup() 
{
    const int ledPin = 12;
    const int switchPin = 2;
    int switchRead = 0;

    pinMode(ledPin, OUTPUT);
    pinMode(switchPin, INPUT);
    Serial.begin(9600);
}

void loop() 
{
    switchRead = digitalRead(switchPin);
    Serial.println(switchRead);
    if(switchRead == 1)
    {
        digitalWrite(ledPin, HIGH);
    }
    if(switchRead == 0)
    {
        digitalWrite(ledPin, LOW)
    }
}
