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

    cout << "Informe o n�mero de linhas (M): ";
    cin >> M;
    cout << "Informe o n�mero de colunas (N): ";
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

    cout << "Matriz resultante da adi��o:" << endl;
    adicionarMatrizes<MAX_M, MAX_N>(matriz1, matriz2, resultado, M, N);
    imprimirMatriz<MAX_M, MAX_N>(resultado, M, N);

    return 0;
}

/*
Fazer um programa em C++ que leia uma matriz inteira de dimens�es M x N (M<=20, N<=25), onde M e N s�o lidos. Calcule e escreva:

- A matriz transposta

- A multiplica��o da matriz por um fator K informado pelo usu�rio;

- A adi��o com uma segunda matriz informada pelo usu�rio;

As matrizes informadas pelo usu�rio n�o devem ser alteradas.

O programa deve utilizar pelo menos uma fun��o para ler os valores a serem  armazenados nas matrizes, uma fun��o para calcular a matriz transposta, uma fun��o  para calcular a multiplica��o por K e uma fun��o para fazer a adi��o das matrizes.


*/
