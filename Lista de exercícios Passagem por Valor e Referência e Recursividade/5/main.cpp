#include <iostream>

int pesquisaBinariaRec(int vetor[], int tamanho, int valor, int inicio, int fim) {
    if (inicio > fim) {
        return -1;
    }

    int meio = (inicio + fim) / 2;

    if (vetor[meio] == valor) {
        return meio;
    } else if (vetor[meio] < valor) {
        return pesquisaBinariaRec(vetor, tamanho, valor, meio + 1, fim);
    } else {
        return pesquisaBinariaRec(vetor, tamanho, valor, inicio, meio - 1);
    }
}

int pesquisaBinaria(int vetor[], int tamanho, int valor) {
    return pesquisaBinariaRec(vetor, tamanho, valor, 0, tamanho - 1);
}

int main() {
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int valor1 = 75;
    int resultado1 = pesquisaBinaria(vetor, tamanho, valor1);
    std::cout << "Valor " << valor1 << " encontrado na posicao " << resultado1 << std::endl;

    int valor2 = 22;
    int resultado2 = pesquisaBinaria(vetor, tamanho, valor2);
    std::cout << "Valor " << valor2 << " encontrado na posicao " << resultado2 << std::endl;

    int valor3 = 90;
    int resultado3 = pesquisaBinaria(vetor, tamanho, valor3);
    std::cout << "Valor " << valor3 << " nao encontrado" << std::endl;

    return 0;
}

/* Realizar uma pesquisa em livro e/ou internet a respeito do algoritmo de Pesquisa Binária.

Realizar manualmente três rastreios sobre o código fonte, pesquisando os valores 75, 22 e 90 no seguinte vetor:

0

18

22

25

34

40

51

66

75

87

Em seguida, faça a implementação em C++ do código fonte de Pesquisa Binária.*/
