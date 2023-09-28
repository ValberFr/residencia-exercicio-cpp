#include <iostream>
#include <vector>

using namespace std;

class Ponto {
    private:
        float x, y;
    public:
        Ponto() {
            x = 0.0;
            y = 0.0;
        }

        void setX(float _x) {
            x = _x;
        }

        float getX() {
            return x;
        }

        void setY(float _y) {
            y = _y;
        }

        float getY() {
            return y;
        }
};

class Poligono {
    private:
        vector<Ponto> pontos;
    public:
        Poligono() {
            pontos = {};
        }

        void setPontos(Ponto _pontos) {
            pontos.push_back(_pontos);
        }

        vector<Ponto> getPontos() {
            return pontos;
        }
};

int main(void) {

    Poligono poli;

    cout << "Criando um poligono!" << endl;

    char sn;

    do {
        cout << "Digite as coordenadas do ponto: ";

        Ponto p;
        float valor;

        cout << "\nX: ";

        cin >> valor;
        p.setX(valor);

        cout << "Y: ";

        cin >> valor;
        p.setY(valor);

        poli.setPontos(p);

        cout << "Deseja inserir mais pontos (s/n)? ";
        cin >> sn;
    } while (sn != 'n');

    cout << "Pontos: " << endl;
    for(Ponto p : poli.getPontos()) {
        cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
    }

    return 0;
}