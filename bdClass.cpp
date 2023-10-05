#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


class Aluno {
    private:
        string nome;
        string email;
        int nota1;
        int nota2;
    public:
        void setNome(string _nome) {
            nome = _nome;
        } 

        string getNome() {
            return nome;
        }

        void setEmail(string _email) {
            email = _email;
        } 

        string getEmail() {
            return email;
        }

        void setNota1(int _nota1) {
            nota1 = _nota1;
        } 

        int getNota1() {
            return nota1;
        }

        void setNota2(int _nota2) {
            nota2 = _nota2;
        } 

        int getNota2() {
            return nota2;
        }
};
class BancoDeDados {
    public:
        static void salvarDados (vector<Aluno> &alunos) {
            ofstream arquivo_saida("exemplo.txt");

            if(arquivo_saida.is_open()) {
                for(auto it : alunos) {
                    arquivo_saida << "Nome: " << it.getNome() << ", " << "Email: " 
                        << it.getEmail() << ", " << "Nota1: "  << it.getNota1() << ", " 
                        << "Nota2: " << it.getNota2() << endl;
                }

                arquivo_saida.close();
            }
        } 

        static void criaAluno (vector<Aluno> &alunos) {
            Aluno aluno;
            string nome, email;
            int nota1, nota2;

            cout << "Digite o nome do aluno: ";
            getline(cin, nome);

            cout << "Digite o email do aluno: ";
            cin >> email;

            cout << "Digite a primeira nota do aluno: ";
            cin >> nota1;

            cout << "Digite a segunda nota do aluno: ";
            cin >> nota2;

            aluno.setNome(nome);
            aluno.setEmail(email);
            aluno.setNota1(nota1);
            aluno.setNota2(nota2);

            alunos.push_back(aluno);
        } 

        static void recuperarDados (vector<Aluno> &alunos) {
            string linha;
            ifstream arquivo("exemplo.txt");

            while(getline(arquivo, linha, '\n')) {
                cout << linha;
            }
        } 
};

int main() {
    vector<Aluno> alunos;
    vector<string> dados;
    string texto;
    //char decisao;

    /*cout << "Digite um texto: ";
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
    }*/

    //BancoDeDados::criaAluno(alunos);
    //BancoDeDados::salvarDados(alunos);
    BancoDeDados::recuperarDados(alunos);

    return 0;
}