#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class BancoDeDados {
    public:
        static bool salvarDados (vector<string> dados) {
            ofstream arquivo_saida("exemplo.txt");

            if(arquivo_saida.is_open()) {
                for(auto it : dados) {
                    arquivo_saida << it << endl;
                }

                arquivo_saida.close();
                return true;
            }

            return false;
        } 

        static vector<string> recuperarDados () {
            
        } 
};

int main() {
    vector<string> dados;
    string texto;
    char decisao;

    cout << "Digite um texto: ";
    cin >> texto;
    dados.push_back(texto);

    while(true) {
        cout << "Deseja digitar mais texto? (s/n): ";
        cin >> decisao;

        if(decisao == 's') {
            cout << "Digite um texto: ";
            cin >> texto;
            dados.push_back(texto);
        } else if(decisao == 'n') {
            break;
        } else {
            cout << "Valor incorreto, digite novamente: ";
        }
    }

    BancoDeDados::salvarDados(dados);

    return 0;
}