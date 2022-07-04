/* Problema 15
  Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario se genera una espiral de números.
  Escribe un programa que reciba un número impar n y calcula la suma de los números en la diagonal de una espiral de nxn.

  _____     ____
 /      \  | ㋡ |
|        |/ ___\|
|_________/
|_|_| |_|_| Oscar Sanchez */

#include <iostream>
using namespace std;

int VerDiagonal(int num);

int main()
{

    int num, sumDiag=1;
    cout<<"Ingresa un numero ==> ";
    cin>>num;

    while (num%2==0) {
        cout<<"Solo se aceptan numeros impares. Vuelve a ingresar el numero\n ==> ";
        cin>>num;
    }

    for (int i = 3; i <= num; i+=2){
        sumDiag += VerDiagonal(i);
    }
    cout<<"En una espiral de "<<num<<"x"<<num<<", la suma es: "<<sumDiag<<endl;
    return 0;
}

int VerDiagonal(int num){
    int rest = num-1;
    int suma = 0;
    num *= num;

    for (int i = 0; i < 4; i++){
        suma += num;
        num -= rest;
    }
    return suma;
}
