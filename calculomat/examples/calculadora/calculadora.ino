#include <Calculo.h>

Calculo calculo(10,5);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

int res;

  res = calculo.Dividir();

  Serial.print(res);

}

void loop() {
}
