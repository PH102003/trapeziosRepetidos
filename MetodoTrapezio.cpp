#include <iostream>
#include <cmath>

using namespace std;

// função que representa a função a ser integrada
double funcao(double x) {
    return sin(x); // função que deseja integrar
}

double metodoDosTrapezios(double a, double b, int n) {
    double h = (b - a) / n; // tamanho do intervalo
    double soma = 0.5 * (funcao(a) + funcao(b)); // inicializa a soma com os valores das extremidades

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        soma += funcao(x);
    }

    return h * soma;
}

int main() {
    double a, b;
    int n;

    // solicitando os limites de integração e o número de subintervalos
    cout << "Digite o limite inferior de integração (a): ";
    cin >> a;
    cout << "Digite o limite superior de integração (b): ";
    cin >> b;
    cout << "Digite o número de subintervalos (n): ";
    cin >> n;

    // calcula a integral usando o método dos trapézios repetidos
    double resultado = metodoDosTrapezios(a, b, n);

    //  resultado
    cout << " valor aproximado da integral: " << resultado << endl;

    return 0;
}
