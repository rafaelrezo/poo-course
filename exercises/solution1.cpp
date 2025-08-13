#include <iostream>
#include <vector>
#include <cstdlib> // para atof
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cerr << "Uso: " << argv[0] << " valor1 valor2 ... valorN valor_referencia" << endl;
        return 1;
    }

    vector<double> valores;
    for (int i = 1; i < argc - 1; i++) {
        valores.push_back(atof(argv[i]));
    }

    double referencia = atof(argv[argc - 1]);

    double soma = 0;
    for (double v : valores) {
        soma += v;
    }
    double media = soma / valores.size();

    cout << "Média: " << media << endl;
    cout << "Valor de referência: " << referencia << endl;
    cout << (media > referencia ? "A média é maior que o valor de referência." 
                                : "A média NÃO é maior que o valor de referência.") 
         << endl;

    return 0;
}