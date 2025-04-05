#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "utils.h"

void iniciarJogo(); // declaração apenas

using namespace std;

void mostrarMenu() {
    drawBar();
    cout << "\033[1;32m" << "FIGHT LIST - TERMINAL EDITION" << "\033[0m" << endl;
    drawBar();
    cout << "1. Jogar" << endl;
    cout << "2. Regras" << endl;
    cout << "3. Sair" << endl;
    drawBar();
    cout << "Seleciona a opção: ";
}

void mostrarRegras() {
    drawBar();
    cout << "\033[1;33mRegras do Jogo:\033[0m" << endl;
    cout << "-> O jogo escolhe uma categoria aleatória." << endl;
    cout << "-> Tens 35 segundos para escrever o máximo de palavras dessa categoria." << endl;
    cout << "-> Cada palavra tem uma pontuação de 1 a 3." << endl;
    cout << "-> O jogo termina quando acertas todas ou acaba o tempo." << endl;
    drawBar();
}

int main() {
    int opcao;
    do {
        mostrarMenu();
        cin >> opcao;
        cin.ignore();

        switch(opcao) {
            case 1:
                iniciarJogo();
                break;
            case 2:
                mostrarRegras();
                break;
            case 3:
                cout << "\033[1;31mA sair... Obrigado por jogar!\033[0m" << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != 3);

    return 0;
}
