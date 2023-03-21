#include <Calculo.h>
#include <Arduino.h>


Calculo::Calculo(int Var1, int Var2){

   this->Valor1 = Var1;
   this->Valor2 = Var2;

}
int Calculo::Somar(){

    return (Valor1 + Valor2);
}

int Calculo::Subtrair(){

    return (Valor1 - Valor2);
}

int Calculo::Multplicar(){

    return (Valor1 * Valor2);
}

int Calculo::Dividir(){

    return (Valor1 / Valor2);
}


