#include <iostream>
#include <string>

using namespace std;

class Banda {
public:
    string nome;
    int integrantes;
    float potenciaSom;
    int energia;

    Banda(string n, int i, float p, int e) {
        nome = n;
        integrantes = i;
        potenciaSom = p;
        energia = e;
    }

    void duelar(Banda &rival) {
        cout<<nome<<" vai duelar com "<<rival.nome<<endl;
        rival.energia = rival.energia- potenciaSom;
    }

    void mostrarStatus() {
        cout<<"Banda: "<<nome<<endl;
        cout<<"Integrantes: "<<integrantes<<endl;
        cout<< "Potencia do som: "<<potenciaSom<<endl;
        cout<<"Energia: "<<energia<<endl;
        cout<<endl;
    }
};

int main() {
    string nome;
    int integrantes;
    float potencia;
    int energia;



    cout<<"Digite os dados da Banda 1:"<<endl;
    cout<<"Nome: ";
    cin>>nome;
    cout<<"Integrantes: ";
    cin>>integrantes;
    cout<<"Potencia do som: ";
    cin>>potencia;
    cout<<"Energia: ";
    cin>>energia;
    Banda banda1(nome, integrantes, potencia, energia);




    cout<<"Digite os dados da Banda 2:" << endl;
    cout<<"Nome: ";
    cin>>nome;
    cout<<"Integrantes: ";
    cin>>integrantes;
    cout<<"Potencia do som: ";
    cin>>potencia;
    cout<<"Energia: ";
    cin>>energia;
    Banda banda2(nome, integrantes, potencia, energia);

    cout<< "Status inicial:"<< endl;
    banda1.mostrarStatus();
    banda2.mostrarStatus();

    banda1.duelar(banda2);

    cout<<"Status final:"<<endl;
    banda1.mostrarStatus();
    banda2.mostrarStatus();

    return 0;
}
