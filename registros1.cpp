#include "iostream"
#include "string.h"
using namespace std;

struct empleado{
    char name[30];
    bool sex;
    float sueldo;
};

int main(){
    system("cls");
    int n,mayor,menor;
    char name0[30];
    bool sex0;
    float sueldo0;
    cout<<"Introduce la cantidad de empleados:  ";cin>>n;
    empleado lista_empleado[n+1];
    for (int i = 1; i <=n; i++){
        cout<<"name"<<" empleado "<<i<<": ";cin>>name0;
        cout<<"sex "<<" empleado "<<i<< " (0 = mujer, 1 = hombre): ";cin>>sex0;
        cout<<"sueldo"<<" empleado "<<i<< ": ";cin>>sueldo0;
        strcpy(lista_empleado[i].name ,name0);
        lista_empleado[i].sex=sex0;
        lista_empleado[i].sueldo=sueldo0;
    }
    mayor=1;
    menor=1;
    for (int i = 2; i<=n; i++){
        if (lista_empleado[mayor].sueldo<lista_empleado[i].sueldo){
            mayor=i;
        }
        if (lista_empleado[menor].sueldo>lista_empleado[i].sueldo){
            menor=i;
        }
        
    }
    cout<<endl<<"Empleado con mayor sueldo"<<endl;
    cout<<"Nombre: "<<lista_empleado[mayor].name<<endl;
    cout<<"sex: "<<lista_empleado[mayor].sex<<endl;
    cout<<"Sueldo: "<<lista_empleado[mayor].sueldo<<endl<<endl;
    cout<<"Empleado con menor sueldo"<<endl;
    cout<<"Nombre: "<<lista_empleado[menor].name<<endl;
    cout<<"sex: "<<lista_empleado[menor].sex<<endl;
    cout<<"Sueldo: "<<lista_empleado[menor].sueldo<<endl;
    return 0;
}