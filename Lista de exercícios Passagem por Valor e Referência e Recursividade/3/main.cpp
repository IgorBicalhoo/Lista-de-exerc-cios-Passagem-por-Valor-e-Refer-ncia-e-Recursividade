#include <iostream>


void segundosParaHoraMinutoSegundo(int segundos, int& hora, int& minuto, int& segundo) {
    hora = segundos / 3600;
    minuto = (segundos % 3600) / 60;
    segundo = (segundos % 3600) % 60;
}



int main() {
    int segundos;
    std::cout << "Digite o tempo de duracao em segundos: ";
    std::cin >> segundos;

    int hora, minuto, segundo;
    segundosParaHoraMinutoSegundo(segundos, hora, minuto, segundo);

    std::cout << "Tempo de duracao: " << hora << "h " << minuto << "m " << segundo << "s" << std::endl;

    return 0;
}


//Faça uma função que receba por parâmetro o tempo de duração expressa em segundos e retorna também
//por parâmetro esse tempo em horas, minutos e  segundos.
