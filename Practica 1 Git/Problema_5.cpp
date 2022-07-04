/* Problema 5
Escribe un programa que muestre el siguiente patrón en la pantalla:

       *   El tamaño del patrón estará determinado por un número entero impar que ingrese el usuario.
      ***
     *****   En el ejemplo mostrado, el tamaño de la figura es 7.
    *******
     *****
      ***
       *

  _____     ____
 /      \  | ㋡ |
|        |/ ___\|
|_________/
|_|_| |_|_| Oscar Sanchez */

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Ingresa un numero ==> ";
    cin>>num;

    while (num%2==0) {
        cout<<"Solo se aceptan numeros impares. Vuelve a ingresar el numero\n ==> ";
        cin>>num;
    }
    int sis=num/2;
    for (int i = 1; i<=num; i+=2){
        for (int v=0; v<sis; v++){
            cout<<" ";
        }
        for (int ast=i; ast > 0; ast--){
            cout<<"*";
        }
        cout<<endl;
        sis--;

    }
    num-=2;
    sis=1;
    for (int i = num; i>0; i-=2){
        for (int v=0; v<sis; v++){
            cout<<" ";
        }
        for (int ast=i; ast > 0; ast--){
            cout<<"*";
        }
        cout<<endl;
        sis++;

    }

    return 0;
}
