#ifndef CALCULO_H_INCLUDED
#define CALCULO_H_INCLUDED

class Calculo{

public:
    Calculo(int Var1, int Var2);
    int Somar();
    int Subtrair();
    int Multplicar();
    int Dividir();
private:
     int Valor1;
     int Valor2;
};

#endif // CALCULO_H_INCLUDED
