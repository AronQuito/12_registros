#include "iostream"
using namespace std;
struct persona{
    char name[30];
    int dia;
    int mes;
    int ano;
};
int main(){
    int n,k=1;
    cout<<"Introducir la cantidad de personas: ";cin>>n;
    persona lista_persona[n+1];
    for (int i = 1; i <= n; i++){
        cout<<"Nombre de persona"<<i<<": ";cin>>lista_persona[i].name;
        cout<<"Mes de nacimiento de persona "<<i<<": ";cin>>lista_persona[i].mes;
        cout<<"Ano de nacimiento de persona "<<i<<": ";cin>>lista_persona[i].ano;
    }
    while (k!=0){
        cout<<"Introduce un mes: ";cin>>k;
        for (int i = 1; i <=n; i++){
            if (k==lista_persona[i].mes){
                cout<<lista_persona[i].name<<" cumple este mes"<<endl;
            } 
        }
    }   
    return 0;
}