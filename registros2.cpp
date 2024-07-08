#include "iostream"
#include "string.h"
using namespace std;
struct persona{
    char name[30];
    int dni;
    int edad;
};
int main(){
    int n,dni0,edad0,pm=0;
    float p;
    char name0[30];

    cout<<"Introduce la cantidad de personas: ";cin>>n;
    persona lista_persona[n+1];
    for (int i = 1; i <=n; i++){
        cout<<"name"<<" persona "<<i<<": ";cin>>name0;
        cout<<"dni "<<" persona "<<i<<": ";cin>>dni0;
        cout<<"edad"<<" persona "<<i<< ": ";cin>>edad0;
        strcpy(lista_persona[i].name ,name0);
        lista_persona[i].dni=dni0;
        lista_persona[i].edad=edad0;
    }
    cout<<endl;
    for (int i = 1; i <= n; i++){
        cout<<endl<<"Persona ingresada numero "<<i<<":"<<endl;
        cout<<"Nombre: "<<lista_persona[i].name<<endl;
        cout<<"sex: "<<lista_persona[i].dni<<endl;
        cout<<"Sueldo: "<<lista_persona[i].edad<<endl<<endl;

        p+=lista_persona[i].edad;
        if (lista_persona[i].edad>50){
            pm++;
        }        
    }
    p/=n;
    cout<<"Existen "<<pm<<" personas mayores a 50"<<endl;
    cout<<"El promedio de edades de las personas es "<<p;
    return 0;
}