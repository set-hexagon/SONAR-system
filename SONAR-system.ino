#include <NewPing.h>

int trigPin = 9;
int echoPin = 11;

NewPing sonar (trigPin, echoPin, 800);

void setup() {
    Serial.begin(9600);
}

void loop() {
    delay(50);
    unsigned int distance = sonar.ping_cm();
    Serial.print(distance);
    Serial.println("cm");
}
