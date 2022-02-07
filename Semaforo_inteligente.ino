// Name the pins

int LED_RED = 2;
int LED_YELLOW = 3;
int LED_GREEN = 4;
int BUTTON = 7;

void setup () {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop (){
  if(digitalRead(BUTTON) == LOW) { 
    digitalWrite(LED_GREEN, HIGH);
  }
  else if(digitalRead(BOTON) == HIGH) {
    delay(5000); // 1s = 1000ms
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_YELLOW, HIGH);
    delay(5000);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_RED, HIGH);
    delay(60000);
    digitalWrite(LED_RED, LOW);
  }
}
