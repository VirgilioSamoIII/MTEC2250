const int led1 = 1;
const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;
const int led10 = 10;
const int switchPin = 13;

int pulse = 0;
boolean pressing;
int switchRead = 0;

void setup() 
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
    pinMode(led8, OUTPUT);
    pinMode(led9, OUTPUT);
    pinMode(led10, OUTPUT);
    pinMode(switchPin, INPUT);
    Serial.begin(9600);

}

void loop() 
{
    if(switchRead == 1 && pressing == true && pulse >= 5 && pulse <= 15)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 15 && pulse <= 25)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 25 && pulse <= 35)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 35 && pulse <= 45)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 45 && pulse <= 55)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 55 && pulse <= 65)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 65 && pulse <= 75)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 75 && pulse <= 85)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led7, HIGH);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 85 && pulse <= 95)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led7, HIGH);
        digitalWrite(led8, HIGH);
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse >= 95 && pulse <= 105)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led7, HIGH);
        digitalWrite(led8, HIGH);
        digitalWrite(led9, HIGH);
        digitalWrite(led10, LOW);
    }
    else if(switchRead == 1 && pressing == true && pulse > 105)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led7, HIGH);
        digitalWrite(led8, HIGH);
        digitalWrite(led9, HIGH);
        digitalWrite(led10, HIGH);
    }
    else 
    {
        pulse = 0;
    }
}
