#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    float capacidade_maxima;
    float peso_atual = 0.0f;
    int opcao;

    cout<<"Informe a capacidade maxima de carga do drone (kg): ";
    cin>>capacidade_maxima;
    cout << fixed << setprecision(2);



    do {
        cout<<"=== SISTEMA DE CARGA DO DRONE ==="<<endl;
        cout<<"1. Verificar Carga"<<endl;
        cout<<"2. Carregar Pacote"<<endl;
        cout<<"3. Descarregar Pacote"<<endl;
        cout<<"4. Encerrar Operacao"<<endl;
        cout<<"Escolha uma opcao: ";
        cin>>opcao;


        if (opcao == 1) {
            cout<<"Carga Atual: "<<peso_atual<<" kg / "<<capacidade_maxima<<" kg"<<endl;
            cout<< "Espaco Disponivel: "<<(capacidade_maxima - peso_atual)<<" kg"<<endl;
        } else if (opcao == 2) {
            float pacote;
            cout<<"Digite o peso do pacote a ser carregado (kg): ";
            cin>>pacote;

            if (peso_atual + pacote > capacidade_maxima) {
                cout<<"Alerta: Peso maximo de decolagem excedido! Operacao cancelada."<<endl;
            }else {
                peso_atual += pacote;
                cout<<"Pacote adicionado com sucesso!"<<endl;
            }
        }else if (opcao == 3) {
            float pacote;
            cout<<"Digite o peso do pacote a ser descarregado (kg): ";
            cin>>pacote;

            if (pacote > peso_atual) {
                cout<<"Alerta: Impossivel remover mais peso do que o carregado! Operacao cancelada." << endl;
            }else {
                peso_atual = peso_atual-pacote;
                cout<<"Pacote removido com sucesso!" << endl;
            }
        }else if (opcao == 4) {
            cout<<"Encerrando sistema de telemetria..."<<endl;
        }else {
            cout<<"Opcao invalida! Tente novamente."<<endl;
        }

    } while (opcao != 4);

    return 0;
}
