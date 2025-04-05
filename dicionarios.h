#ifndef DICIONARIOS_H
#define DICIONARIOS_H

#include <string>
#include <vector>
#include <unordered_map>

struct Categoria {
    std::string nome;
    std::vector<std::string> palavras;
    std::unordered_map<std::string, int> pontuacoes;
};

// Declaração externa da variável global
extern std::vector<Categoria> categorias;

#endif
