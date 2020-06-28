#include <iostream>
#include <string>

using namespace std;

char codificador(char codi[], int i){
  switch (codi[i]){
    case 'm':
    codi[i]='0'; return codi[i];
    break;

    case 'u':
    codi[i]='1'; return codi[i];
    break;

    case 'r':
    codi[i]='2'; return codi[i];
    break;

    case 'c':
    codi[i]='3'; return codi[i];
    break;

    case 'i':
    codi[i]='4'; return codi[i];
    break;

    case 'e':
    codi[i]='5'; return codi[i];
    break; 

    case 'l':
    codi[i]='6'; return codi[i];
    break;

    case 'a':
    codi[i]='7'; return codi[i];
    break;

    case 'g':
    codi[i]='8'; return codi[i];
    break;

    case 'o':
    codi[i]='9'; return codi[i];
    break;
    
    default: return codi[i];
    break;
  }
  return codi[i];
}

void arreglo(char ex[], int cantlet){
  for (int i = 0; i < cantlet; i++)
  cout<<ex[i]<<" ";
  cout<<endl;
}

int main(void){
string palabra, pcode;
char codi[50];
int cantlet;
cout<<"Ingrese la palabra que va a codificar: ";
cin>>codi;
palabra=codi;
cantlet= (palabra).length();
for(int i = 0 ; i < cantlet; i++){
  codificador(codi, i);
}
pcode=codi;
cout<<"La palabra ingresada: "<<palabra<<". Codificada con la clave MURCIELAGO es: "<<pcode<<"."<<endl<<endl;

}