#include <iostream>

using namespace std;
void prom(int basededatos[][5], int alumnos){
    int sum = 0.0;
    for(int i=0 ; i<5 ; i++){
        sum += (basededatos[alumnos][i] * 0.2);
    }
    int promedio = (sum/5);
    if(sum > 6){
        cout<<"El promedio es: "<<promedio<<endl;
        cout<<"Alumno aprobado. "<<endl;
    }else{
        cout<<"El promedio es: "<<promedio<<endl;
        cout<<"EAlumno reprobado. "<<endl;
    }
}

void Notas_2(int notas, int alumnos){
    int basededatos[alumnos][5]; 
    for (int a=0 ; a<alumnos ; a++){
        for (int i=0 ; i<5 ; i++){
        cout<<"Ingrese las notas de cada alumno: "<<endl;
        cin>>notas;
        notas = basededatos[a][i];
        }
        prom(basededatos, alumnos);
    }
}

int main(){
    int alumnos;
    int notas;
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>alumnos;
    cout<<endl<<endl;
    int matriz[alumnos][5];
    Notas_2(notas, alumnos);

    


    return 0;
}