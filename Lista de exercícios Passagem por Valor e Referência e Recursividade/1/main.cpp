#include <iostream>

void idadeEmAnosMesesDias(int dias, int& anos, int& meses, int& diasRestantes) {
    anos = dias / 365;
    meses = (dias % 365) / 30;
    diasRestantes = (dias % 365) % 30;
}

int main() {
    int dias;
    std::cout << "Digite a idade em dias: ";
    std::cin >> dias;

    int anos, meses, diasRestantes;
    idadeEmAnosMesesDias(dias, anos, meses, diasRestantes);

    std::cout << "Idade em anos, meses e dias: " << anos << " anos, " << meses << " meses e " << diasRestantes << " dias." << std::endl;

    return 0;
}

//Faça uma função que recebe a idade de uma pessoa em dias e retorna essa idade expressa em anos, meses e dias.
