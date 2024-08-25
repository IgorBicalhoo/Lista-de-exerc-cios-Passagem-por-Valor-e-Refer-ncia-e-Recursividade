#include <iostream>


int somatorioRecursivo(int n) {
    if (n <= 0) {
        return -1;
    } else if (n == 1) {
        return 1;
    } else {
        return n + somatorioRecursivo(n - 1);
    }
}


int somatorioIterativo(int n) {
    if (n <= 0) {
        return -1;
    }

    int somatorio = 0;
    for (int i = 1; i <= n; i++) {
        somatorio += i;
    }
    return somatorio;
}

int main() {
    int n;
    std::cout << "Digite um valor para N: ";
    std::cin >> n;

    int resultadoRecursivo = somatorioRecursivo(n);
    int resultadoIterativo = somatorioIterativo(n);

    if (resultadoRecursivo != -1) {
        std::cout << "Somatorio recursivo: " << resultadoRecursivo << std::endl;
    } else {
        std::cout << "Erro: valor invalido" << std::endl;
    }

    if (resultadoIterativo != -1) {
        std::cout << "Somatorio iterativo: " << resultadoIterativo << std::endl;
    } else {
        std::cout << "Erro: valor invalido" << std::endl;
    }

    return 0;
}


//Calcular o somatório de 1 à N Recursivamente e Iterativamente. Valores  menores ou iguais a zero representam situações de erro.




