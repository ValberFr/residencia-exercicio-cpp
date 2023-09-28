#include <iostream>

using namespace std;

class Mamifero {
    private:
        string especie;
        string ordem;
        string familia;
        string genero;
        string alimentacao;
    public:
        Mamifero(string _especie, string _ordem, string _familia, string _genero, string _alimentacao) {
            especie = _especie;
            ordem = _ordem;
            familia = _familia;
            genero = _genero;
            alimentacao = _alimentacao;
        }

        void setEspecie(string _especie) {
            especie = _especie;
        }

        string getEspecie() {
            return especie;
        }

        void setOrdem(string _ordem) {
            ordem = _ordem;
        }

        string getOrdem() {
            return ordem;
        }

        void setFamilia(string _familia) {
            familia = _familia;
        }

        string getFamilia() {
            return familia;
        }

        void setGenero(string _genero) {
            genero = _genero;
        }

        string getGenero() {
            return genero;
        }

        void setAlimentacao(string _alimentacao) {
            alimentacao = _alimentacao;
        }

        string getAlimentacao() {
            return alimentacao;
        }

        void andar() {
            cout << especie << " andando!" << endl;
        }

        void comer() {
            if(alimentacao == "onívoro") {
                cout << especie << " comendo carne ou folhas!" << endl;
            } else if (alimentacao == "carnívoro") {
                cout << especie << " comendo carne!" << endl;
            } else {
                cout << especie << " comendo folhas!" << endl;
            }
        }
};

int main(void) {

    Mamifero animal1("Macaco", "primata", "hominideo", "pan", "carnívoro");
    Mamifero animal2("Chimpanzé", "primata", "hominideo", "pan", "onívoro");

    animal1.comer();
    animal2.andar();

    cout << animal1.getEspecie() << endl;

    return 0;
}