#include <iostream>
using namespace std;

// Classe Tempo
class Tempo {
private:
    int horas;
    int minutos;
    int segundos;

public:
    // Construtor
    Tempo(int h, int m, int s) : horas(h), minutos(m), segundos(s) {}

    // Método para calcular e retornar o total de segundos
    int calcularTotalSegundos() const {
        return (horas * 3600) + (minutos * 60) + segundos;
    }
};

int main() {
    int horas, minutos, segundos;

    // Entrada dos dados
    cin >> horas;
    cin >> minutos;
    cin >> segundos;

    // Criando objeto da classe Tempo usando new
    Tempo* tempo = new Tempo(horas, minutos, segundos);

    // Exibir o total de segundos diretamente
    cout << tempo->calcularTotalSegundos() << endl;

    // Liberar a memória alocada
    delete tempo;

    return 0;
}
