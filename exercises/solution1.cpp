#include <iostream>
#include <vector>
#include <cstdlib> // para atof
using namespace std;

int main(int argc, char* argv[]) {
    //tratando input do programa
    if (argc < 3) {
        cerr << "Uso: " << argv[0] << " valor1 valor2 ... valorN valor_referencia" << endl;
        return 1;
    }
    //carregando vetor de entrada
    vector<double> valores;
    for (int i = 1; i < argc - 1; i++) {
        valores.push_back(atof(argv[i]));
    }

    //lendo valor de referencia (ultimo valor da lista de input )
    double referencia = atof(argv[argc - 1]);

    //calculando a media
    double soma = 0;
    for (double v : valores) {
        soma += v;
    }
    double media = soma / valores.size();

    //gerando saida do programa
    cout << "Média: " << media << endl;
    cout << "Valor de referência: " << referencia << endl;
    cout << (media > referencia ? "A média é maior que o valor de referência." 
                                : "A média NÃO é maior que o valor de referência.") 
         << endl;

    return 0;
}