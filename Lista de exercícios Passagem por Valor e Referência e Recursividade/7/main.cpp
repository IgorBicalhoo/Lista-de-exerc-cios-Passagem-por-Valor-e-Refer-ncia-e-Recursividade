#include <iostream>


int fibonacciRecursivo(int n) {
    if (n <= 0) {
        return -1;
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
    }
}


int fibonacciIterativo(int n) {
    if (n <= 0) {
        return -1;
    }

    int a = 0;
    int b = 1;
    int resultado = 0;

    for (int i = 2; i <= n; i++) {
        resultado = a + b;
        a = b;
        b = resultado;
    }

    if (n == 1) {
        return a;
    } else {
        return resultado;
    }
}

int main() {
    int n;
    std::cout << "Digite a posicao desejada na sequencia de Fibonacci: ";
    std::cin >> n;

    int resultadoRecursivo = fibonacciRecursivo(n);
    int resultadoIterativo = fibonacciIterativo(n);

    if (resultadoRecursivo != -1) {
        std::cout << "Valor da sequencia de Fibonacci na posicao " << n << " (recursivo): " << resultadoRecursivo << std::endl;
    } else {
        std::cout << "Erro: valor invalido" << std::endl;
    }

    if (resultadoIterativo != -1) {
        std::cout << "Valor da sequencia de Fibonacci na posicao " << n << " (iterativo): " << resultadoIterativo << std::endl;
    } else {
        std::cout << "Erro: valor invalido" << std::endl;
    }

    return 0;
}


/*
Implementar a sequência de Fibonacci Recursivamente e Iterativamente.
 O  usuário deve informar a posição desejada
e o programa retornar o valor da sequência nessa determinada posição.

*/
