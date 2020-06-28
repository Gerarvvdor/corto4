#include <iostream>
using namespace std;

//*Funcion que realiza el calculo del promedio*//
float sacarprom(float arrayX[]){
    float promedio;
    float suma = 0;
    for (int i = 0; i < 25; i++){
        suma += arrayX[i];
    }
    promedio = (suma/25.0); 
    return promedio;
}

//*función que determina cuantas estaturas están por encima de la media*//
void distribucionmayor(float estaturas[], float prom){
    int mayorAprom = 0;
    for (int i = 0; i < 25; i++){
        if (estaturas[i] > prom){
        mayorAprom++;
        }
    }
    cout<<"La cantidad de alumnos que su estatura es mayor a la media es: "<<mayorAprom<<endl;;
}

//Fucnión que determina cuantas estaturas están por debajo de la media*//
void distribucionmenor(float estaturas[], float prom){
    int menorAprom = 0;
    for (int i = 0; i < 25; i++){
        if (estaturas[i] < prom){
        menorAprom++;
        }
    }
    cout<<"La cantidad de alumnos que su estatura es menor a la media es: "<<menorAprom<<endl;
}

int main(){
    float estaturas[25];
    for (int i = 0; i < 25; i++){
        cout<<"Ingrese las alturas de los estudiantes: ";
        cin>>estaturas[i];
    }
    cout<<endl<<endl<<endl;
    float prom = sacarprom(estaturas);

    cout<<"El promedio de las estaturas es: "<<sacarprom(estaturas)<<"cm."<<endl<<endl;

    distribucionmayor(estaturas, prom);
    distribucionmenor(estaturas, prom);
    
    
    return 0;
}



