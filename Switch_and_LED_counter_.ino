const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;
const int switchPin1 = 6;
const int switchPin2 = 4;
const int switchPin3 = 2;
int switchRead1 = 0;
int switchRead2 = 0;
int switchRead3 = 0;
boolean pressing;
int counter = 0;

void setup() 
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(switchPin1, INPUT);
    pinMode(switchPin2, INPUT);
    pinMode(switchPin3, INPUT);
    Serial.begin(9600);
}

void loop() 
{
    switchRead1 = digitalRead(switchPin1);
    Serial.println(switchRead1);
    switchRead2 = digitalRead(switchPin2);
    Serial.println(switchRead2);
    switchRead3 = digitalRead(switchPin3);
    Serial.println(switchRead3);
    
    if(switchRead1 == 1)
    {
        pressing = true;
    }
    if(switchRead1 == 0 && pressing == true)
    {
        pressing = false;
        counter++;
        Serial.println(counter);
    }
    if(switchRead2 == 1)
    {
        pressing = true;
    }
    if(switchRead2 == 0 && pressing == true)
    {
        pressing = false;
        counter++;
        Serial.println(counter);
    }
    if(switchRead3 == 1)
    {
        pressing = true;
    }
    if(switchRead3 == 0 && pressing == true)
    {
        pressing = false;
        counter++;
        Serial.println(counter);
    }
    if(counter == 1)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
    }
    else if(counter == 2)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, LOW);
    }
    else if(counter == 3)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, HIGH);
    }
    else
    {
        counter = 0;
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
    }
}
