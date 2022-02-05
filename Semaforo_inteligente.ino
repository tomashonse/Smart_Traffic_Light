// Nombro los pines para trabajar con mayor facilidad

int LED_ROJO = 2;
int LED_AMARILLO = 3;
int LED_VERDE = 4;
int BOTON = 7;

// Inicializo los pines, ya que en este caso son todos digitales

void setup () {
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(BOTON, INPUT);
}

void loop (){
  if(digitalRead(BOTON) == LOW) { // Si el botón no está presionado que se mantenga encendido el LED azul
    digitalWrite(LED_VERDE, HIGH);
  }
  else if(digitalRead(BOTON) == HIGH) { // Si se presiona el botón inicializa la secuencia
    delay(5000); // 1 segundo = 1000 milisegundos
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARILLO, HIGH);
    delay(5000);
    digitalWrite(LED_AMARILLO, LOW);
    digitalWrite(LED_ROJO, HIGH);
    delay(6000);
    digitalWrite(LED_ROJO, LOW);
  }
}
