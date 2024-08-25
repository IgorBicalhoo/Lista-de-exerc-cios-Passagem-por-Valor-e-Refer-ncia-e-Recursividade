#include <iostream>

void minutosParaHora(int minutos, int& hora, int& minuto) {
    hora = minutos / 60;
    minuto = minutos % 60;
}

int main() {
    int minutos;
    int hora, minuto;
    std::cout << "Digite quantos minutos se passaram desde meia-noite: ";
    std::cin >> minutos;


    minutosParaHora(minutos, hora, minuto);

    std::cout << "Hora atual: " << hora << ":" << minuto << std::endl;

    return 0;
}


//Fa�a uma fun��o que receba um par�metro com o total de minutos passados ao longo do dia e tamb�m dois
// par�metros que devem ser preenchidos com o  valor da hora
//e do minuto corrente. Fa�a um programa que leia do teclado quantos
// minutos se passaram desde meia-noite e imprima no formato de horas e minutos.
