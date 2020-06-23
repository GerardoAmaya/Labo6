//Suma de arreglos

#include<iostream>
#include<math.h>

using namespace std;

float suma_arreglo(int tamano, int arregloa[], int arreglob[], int arregloab[]);
float leer_arreglo(int tamano, int arregloa[]);
float arreglo(int tamano, int arregloa[], int arreglob[], int arregloab[]);

int main(){

int tamano =0;
int arregloa[tamano], arreglob[tamano], arregloab[tamano];

//Se pide el tamano de digitos que podran abarcar los 2 arreglos
//Se solicita ingresar los digitos del primer y segundo arreglo

cout<< "suma de arreglos\n"<<endl;
cout<<"Ingrese el tamano que tendran sus 2 arreglos ";
cin>>tamano;

cout<<"Ingrese los numeros del primer arreglo"<<endl;
leer_arreglo(tamano, arregloa);

cout<<"Ingrese los numeros del segundo arreglo"<<endl;
leer_arreglo(tamano, arreglob);

suma_arreglo(tamano, arregloa, arreglob, arregloab);
arreglo(tamano, arregloa, arreglob, arregloab);

return 0;
}

float leer_arreglo(int tamano, int n[])
  { n[tamano];

   //colocar los numeros en las casillas del arreglo
    for(int i = 0;i < tamano;i++)
    {
        cout << "Digite el numero que pertenecera a la casilla " << i;
        cin  >> n[i]; 
    }
    cout<<endl;
}

//suma de los arreglos

float suma_arreglo(int tamano, int a[], int b[], int ab[])
{
    a[tamano]; 
    b[tamano]; 
    ab[tamano];
for (int i = 0; i < tamano; i++){
    ab[i] =a[i] + b[i];
}

}
//Finalmente se presentan los resultados
float arreglo(int tamano, int a[], int b[], int ab[])
{
    a[tamano];
    b[tamano];
    ab[tamano];

    for(int i = 0;i < tamano;i++)
    {
        cout << a[i] << " mas " << b[i] << " = " << ab[i];
        cout <<endl;
    }
    cout <<endl;
}



  




