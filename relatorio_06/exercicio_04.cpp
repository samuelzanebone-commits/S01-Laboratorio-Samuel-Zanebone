#include <iostream>
#include <string>

using namespace std;


class Hobbit {
public:
    string nome;

    Hobbit(string n) {
        nome = n;
    }

    virtual ~Hobbit() {}

    virtual void fazerAtividade() {
        cout<<"O hobbit "<<nome<<" esta aproveitando um dia tranquilo na Comarca."<<endl;
    }
};



class Jardineiro : public Hobbit {
public:
    Jardineiro(string n) : Hobbit(n) {}

    void fazerAtividade() {
        cout<<"O jardineiro "<<nome<<" esta cuidando das flores e plantas ao redor das tocas!"<<endl;
    }
};

class Cozinheiro : public Hobbit {
public:
    Cozinheiro(string n) : Hobbit(n) {}

    void fazerAtividade() {
        cout<<"O cozinheiro "<<nome<<" esta preparando o segundo cafe da manha para os convidados!"<<endl;
    }
};


class Fazendeiro : public Hobbit {
public:
    Fazendeiro(string n) : Hobbit(n) {}

    void fazerAtividade() {
        cout<<"O fazendeiro "<<nome<<" esta colhendo vegetais e hortalicas em suas terras!"<<endl;
    }
};



int main() {
    string nomeHobbit, nomeJardineiro, nomeCozinheiro, nomeFazendeiro;

    cout<<"Digite o nome do hobbit: ";
    cin>>nomeHobbit;
    cout<<"Digite o nome do jardineiro: ";
    cin>>nomeJardineiro;
    cout<<"Digite o nome do cozinheiro: ";
    cin>>nomeCozinheiro;
    cout<<"Digite o nome do fazendeiro: ";
    cin>>nomeFazendeiro;

    Hobbit* hobbits[4];

    hobbits[0] = new Hobbit(nomeHobbit);
    hobbits[1] = new Jardineiro(nomeJardineiro);
    hobbits[2] = new Cozinheiro(nomeCozinheiro);
    hobbits[3] = new Fazendeiro(nomeFazendeiro);


    cout<<"Atividades do dia:"<<endl;
    for (int i = 0; i < 4; i++) {
        hobbits[i]->fazerAtividade();
    }

    
    for (int i = 0; i < 4; i++) {
        delete hobbits[i];
    }

    return 0;
}
