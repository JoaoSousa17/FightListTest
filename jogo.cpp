#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctime>
#include <algorithm>
#include "dicionarios.h"
#include "utils.h"

using namespace std;

void iniciarJogo() {
    srand(time(nullptr));
    int categoriaIndex = rand() % categorias.size();
    Categoria categoria = categorias[categoriaIndex];

    vector<string> respondidas;
    int pontuacao = 0;
    time_t inicio = time(nullptr);

    system("clear"); // ou "cls" no Windows
    drawBar();
    cout << "Categoria: \033[1;34m" << categoria.nome << "\033[0m" << endl;
    drawBar();
    cout << "Tens 35 segundos! Escreve palavras: " << endl;

    while (difftime(time(nullptr), inicio) < 35 && respondidas.size() < categoria.palavras.size()) {
        cout << "> ";
        string entrada;
        getline(cin, entrada);

        // Normaliza input
        transform(entrada.begin(), entrada.end(), entrada.begin(), ::tolower);

        // Verifica se já foi dita
        if (find(respondidas.begin(), respondidas.end(), entrada) != respondidas.end()) {
            cout << "Já respondeste essa!" << endl;
            continue;
        }

        // Verifica se está correta
        auto it = categoria.pontuacoes.find(entrada);
        if (it != categoria.pontuacoes.end()) {
            pontuacao += it->second;
            respondidas.push_back(entrada);
            cout << "✔ Correto! +" << it->second << " pontos." << endl;
        } else {
            cout << "✘ Palavra inválida." << endl;
        }
    }

    drawBar();
    cout << "\033[1;32mFim de jogo!\033[0m" << endl;
    cout << "Palavras corretas: " << respondidas.size() << endl;
    cout << "Pontuação final: \033[1;35m" << pontuacao << "\033[0m" << endl;
    drawBar();
}
