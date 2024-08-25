#include <iostream>

using namespace std;

const int MAX_M = 20;
const int MAX_N = 25;

template <int M, int N>
void lerMatriz(int matriz[][N], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
}

template <int M, int N>
void imprimirMatriz(int matriz[][N], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

template <int M, int N>
void calcularMatrizTransposta(int matriz[][N], int transposta[][M], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

template <int M, int N>
void multiplicarMatrizPorK(int matriz[][N], int m, int n, int K) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] *= K;
        }
    }
}

template <int M, int N>
void adicionarMatrizes(int matriz1[][N], int matriz2[][N], int resultado[][N], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int M, N, K;

    cout << "Informe o número de linhas (M): ";
    cin >> M;
    cout << "Informe o número de colunas (N): ";
    cin >> N;

    int matriz1[MAX_M][MAX_N];
    int matriz2[MAX_M][MAX_N];
    int transposta[MAX_N][MAX_M];
    int resultado[MAX_M][MAX_N];

    cout << "Informe a matriz 1:" << endl;
    lerMatriz<MAX_M, MAX_N>(matriz1, M, N);

    cout << "Informe a matriz 2:" << endl;
    lerMatriz<MAX_M, MAX_N>(matriz2, M, N);

    cout << "Informe o fator K: ";
    cin >> K;

    cout << "Matriz 1:" << endl;
    imprimirMatriz<MAX_M, MAX_N>(matriz1, M, N);

    cout << "Matriz transposta:" << endl;
    calcularMatrizTransposta<MAX_M, MAX_N>(matriz1, transposta, M, N);
    imprimirMatriz<MAX_N, MAX_M>(transposta, N, M);

    cout << "Matriz multiplicada por K:" << endl;
    multiplicarMatrizPorK<MAX_M, MAX_N>(matriz1, M, N, K);
    imprimirMatriz<MAX_M, MAX_N>(matriz1, M, N);

    cout << "Matriz resultante da adição:" << endl;
    adicionarMatrizes<MAX_M, MAX_N>(matriz1, matriz2, resultado, M, N);
    imprimirMatriz<MAX_M, MAX_N>(resultado, M, N);

    return 0;
}

/*
Fazer um programa em C++ que leia uma matriz inteira de dimensões M x N (M<=20, N<=25), onde M e N são lidos. Calcule e escreva:

- A matriz transposta

- A multiplicação da matriz por um fator K informado pelo usuário;

- A adição com uma segunda matriz informada pelo usuário;

As matrizes informadas pelo usuário não devem ser alteradas.

O programa deve utilizar pelo menos uma função para ler os valores a serem  armazenados nas matrizes, uma função para calcular a matriz transposta, uma função  para calcular a multiplicação por K e uma função para fazer a adição das matrizes.


*/
