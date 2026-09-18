#include <iostream>
#include <string>

using namespace std;


class MembroInatel {
public:
    string nome;

    MembroInatel(string n) {
        nome = n;
    }

    void seApresentar() {
        cout<<"Sou um membro da comunidade Inatel: "<<nome<<"."<<endl;
    }
};

class Aluno : public MembroInatel {
public:
    string curso;

    Aluno(string n, string c) : MembroInatel(n) {
        curso = c;
    }

    void seApresentar() {
        cout<<"Meu nome e "<<nome<<" e estudo no curso de "<<curso<< ". "<<endl;
    }
};



class Professor : public MembroInatel {
public:
    string disciplina;

    Professor(string n, string d) : MembroInatel(n) {
        disciplina = d;
    }

    void seApresentar() {
        cout<<"Meu nome e "<<nome<<" e leciono a disciplina de "<<disciplina<<"."<<endl;
    }
};

int main() {
    string nomeAluno, curso;
    string nomeProf, disciplina;

    cout<<"Dados do Aluno:"<<endl;
    cout<<"Nome: ";
    cin>>nomeAluno;
    cout<<"Curso: ";
    cin>>curso;

    Aluno aluno(nomeAluno, curso);

    cout<<"Dados do Professor:"<<endl;
    cout<<"Nome: ";
    cin>>nomeProf;
    cout<<"Disciplina: ";
    cin>>disciplina;

    Professor prof(nomeProf, disciplina);

    cout<<"Apresentacoes:"<<endl;
    aluno.seApresentar();
    prof.seApresentar();

    return 0;
}
