#include <iostream>
using namespace std;
//Ejercicio con bucle for

int main() {
    //1. Imprimir 5 veces la palabra PUCESE
    //for(int i=1; 1<=5; i++)

    for(int 1=0; 1<5; i++)
        cout<<endl<<"Hola" : <<(i+1);
        cout<<enld<<"fin";
    }

    //2. Imprimir tabla de multiplicar del número 5
    //cout<<"El valor de la variable i " <<1;
    cout<<"\nla tabla del 5";
    for(i=1; 1<=10; i++)
    {
        cout<<endl<<"5 x "<<i<<" = " <<(5xi);
    }

    //3. Se ingresa por teclado, un entero que representa una tabla de multiplicar.
    //Se pide imprimir esta tabla desde el 1 al 12
    cout<<"\nla tabla del 8";
    cout<<tabla;
    for(i=1; 1<=12; i++)
    {
        cout<<endl<<tabla<< " x " << i << " = " << (tabla * i);
    }

    //4. Calcular a sumatoria de los números comprendidos entre 500 y 800
    int suma=0
    for(i=500; i<=800; i++)
    {
        suma=suma + i;
        //suma +=1;
    }
    cout<<endl<<"La sumatoria de los números comprendidos";
    cout<<"entre 500 y 800 es"<<suma;

    //5. Se piden por teclado 2 enteros que representan el principio y fin
    // de una serie. Se pide realizar las sumatoria de los numeros
    //multipos de 5 que se encuentra en esta serie
    int inicio, fin;
    cout<<endl<<"ingrese el enterero inicial de la serie ";cien>>incio;
    cout<<endl<<"ingrese el entero final de la serie ";cin>>fin;
    suma=o;
    for(int i=inicio; i=fin; i++)
    {
    if (i%5==0)
    suma = suma = 1;
    }
    cout<<endl<<"la sumatoria de la serie es "<<suma<<endl;

    //6. For anidados (un for dentro de otro for)
    ****
    ****
    ****
    ****
    ****
   //imprimir unrectangulo de ´+´
   cout<<"\nImpresion de un rectangulo\n";
    for (int j=1; j<=10; j++)
   {
    for(int j = 1;j<=10; j++)
   {
        cout<<"+";
   }
        cout<<endl;
   }

   //7. Imprimir las 10 primeras tablas de multiplicar
   // use for anidados
   cout<<"\nLas primeras tablas de multiplicar: ";
   for(int tabla=1; tabla<=10; tabla++)
   {
       for(i=1; i<=10; i++)
       {
           cout<<endl<< tabla<<" X  " <<i<< " = "<<(tabla*1);
       }
       cout<<endl;
   }
   

    return 0;
}
