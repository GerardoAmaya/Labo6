//100 primeros números enteros impares y los muestre en forma descendente.

#include <iostream>

using namespace std;

int a(int num[199])

{ for (int i = 199; i >= 1; i-= 2 )
    {
     num[i] = i;
     
     cout << num[i] <<",";
    }
}

int main(){
cout << "Los primeros 100 numeros impares de forma descendente son \n";

int rango[199];

a(rango);

return 0;

}