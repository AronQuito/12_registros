#include "iostream"
using namespace std;
struct atleta{
    char name[30];
    char pais[10];
    char dis[30];
    int nm;
};
int main(){
    int n;
    char pais0[10]
    cout<<"Introducir la cantidad de atletas: ";cin>>n;
    atleta lista_atleta[n+1];
    for (int i = 1; i <= n; i++){
        cout<<"Nombre de aleta "<<i<<": ";cin>>lista_atleta[i].name;
        cout<<"Pais del atleta "<<i<<": ";cin>>lista_atleta[i].pais;
        cout<<"Disciplina del atleta "<<i<<": ";cin>>lista_atleta[i].dis;
        cout<<"Numero de medallas del atleta "<<i<<": ";cin>>lista_atleta[i].nm;
    }
    cout<<"Introduce un pais: ";cin>>pais0;
    for (int i = 1; i <=n; i++){
        if (pais0==lista_atleta[i].pais){
            cout<<lista_atleta[i].name<<" viene de este pais."<<endl;
        } 
    }
    return 0;
}