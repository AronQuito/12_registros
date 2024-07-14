#include "iostream"
#include "cstring"
using namespace std;
struct atleta{
    char name[30];
    char pais[10];
    char dis[30];
    int nm;
};
int main(){
    int n,m=0,k;
    char pais0[10];
    cout<<"Introducir la cantidad de atletas: "; cin>>n;
    int M[n+1];
    atleta lista_atleta[n+1];
    for (int i = 1; i <= n; i++){
        cout<<"Nombre de atleta "<<i<<": ";cin>>lista_atleta[i].name;
        cout<<"Pais del atleta "<<i<<": ";cin>>lista_atleta[i].pais;
        cout<<"Disciplina del atleta "<<i<<": ";cin>>lista_atleta[i].dis;
        cout<<"Numero de medallas del atleta "<<i<<": ";cin>>lista_atleta[i].nm;
    }
    cout<<"Introduce un pais: ";cin>>pais0;
    for (int i = 1; i <=n; i++){
        if (strcmp(pais0, lista_atleta[i].pais) == 0){
            cout<<lista_atleta[i].name<<" viene de este pais."<<endl;
            m++;
            M[m]=i;
        } 
    }
    k=M[1];
    for (int i = 2; i<=m; i++){
        if (lista_atleta[k].nm<lista_atleta[M[i]].nm){
            k=M[i];
        }
    }
    cout<<"El atleta de el pais recogido con mas medallas es: "<<lista_atleta[k].name;

    return 0;
}