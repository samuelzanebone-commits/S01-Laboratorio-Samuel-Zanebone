#include <iostream>
#include <string>

using namespace std;

class LinkSocial {
private:
    string nome;
    string arcana;
    int rank;

public:
    // Setters
    void setNome(string n) {
        nome = n;
    }


    void setArcana(string a) {
        arcana = a;
    }
    
    void setRank(int r) {
        rank = r;
    }

    // Getters
    string getNome() {
        return nome;
    }

    string getArcana() {
        return arcana;
    }

    int getRank() {
        return rank;
    }
    void subirRank() {
        rank++;
    }
};

int main() {
    LinkSocial link;
    string nome;
    string arcana;
    int rank;


    cout<<"Digite o nome: ";
    cin>>nome;
    cout<<"Digite a arcana: ";
    cin>>arcana;
    cout<<"Digite o rank: ";
    cin>>rank;

    link.setNome(nome);
    link.setArcana(arcana);
    link.setRank(rank);

    cout<<"Dados Iniciais"<<endl;
    cout<<"Nome: "<<link.getNome()<<endl;
    cout<<"Arcana: "<<link.getArcana()<<endl;
    cout<<"Rank: "<<link.getRank()<<endl;

    link.subirRank();

    cout<<"Rank Subido"<<endl;
    cout<<"Nome: "<<link.getNome()<<endl;
    cout<<"Arcana: "<<link.getArcana()<<endl;
    cout<<"Novo Rank: "<<link.getRank()<<endl;

    return 0;
}
