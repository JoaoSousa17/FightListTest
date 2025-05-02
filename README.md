# 🧠 FightList - Terminal Edition

Este projeto é uma versão em terminal inspirada no jogo **Fight List**, desenvolvido como uma experiência para avaliar a viabilidade da implementação de jogos simples em C com interface textual. O objetivo é estudar a facilidade de integração de lógicas deste género num projeto final da unidade curricular de **Laboratórios de Computadores (LCOM)** do curso de **Licenciatura em Engenharia Informática e Computação (LEIC)**.

---

## 🎮 Contexto

Esta versão é **single-player**, jogada contra o tempo, e serve como **prova de conceito** para testar o uso de C com menus interativos, utilização de cores ANSI no terminal e gestão de dados através de dicionários temáticos.

---

## 📋 Regras do Jogo

- O jogo escolhe uma **categoria aleatória** (ex: Cores, Frutas, Profissões...).
- O jogador tem **35 segundos** para escrever o máximo de palavras que pertençam a essa categoria.
- Cada palavra tem uma **pontuação entre 1 e 3 pontos**, dependendo da sua raridade.
- O jogo termina quando o tempo esgota ou o jogador acerta todas as palavras da categoria.

---

## 🧱 Estrutura do Projeto

```
FightList/
├── main.c                              // Entrada principal do programa
├── gameLogic/                          // Lógica principal do jogo
│   ├── jogo.c                          // Verificação de entradas, pontuação
│   └── jogo.h                          // Declarações das funções de jogo
├── terminalVersionArchives/            // Gestão da interface em terminal
│   ├── terminalGestion.c               // Implementação do menu e interação
│   └── terminalGestion.h               // Declarações das funções de terminal
├── utils/                              // Funções utilitárias
│   ├── utils.c                         // Funções como drawBar()
│   └── utils.h                         // Declarações de utilidades
├── leaderboard/                        // Sistema de pontuação
│   ├── leaderboard.c                   // Implementação do leaderboard
│   └── leaderboard.h                   // Declarações do leaderboard
├── storedData/                         // Dados armazenados
│   ├── dicionarios.h                   // Declarações dos dicionários/categorias
│   └── leaderboard.txt                 // Arquivo de pontuações
├── Makefile                            // Configuração para compilação
└── README.md                           // Documentação do projeto
```

---

## ⚙️ Instruções de Instalação e Execução

### Pré-requisitos
- Compilador C com suporte a C99 (como `gcc`)
- Terminal com suporte a **códigos ANSI** (cores)

### Compilar
```bash
# Utilizando o Makefile
make
```

### Executar
```bash
./fightlist
```

### Limpar arquivos de compilação
```bash
make clean
```

> No Windows, usar `fightlist.exe` após compilar.

---

## 🗂 Categorias disponíveis

O jogo inclui **25 dicionários** com pelo menos 12 palavras cada:

- Meses do Ano
- Cores
- Frutas
- Profissões
- Espaço
- Animais
- Países Europeus
- Instrumentos Musicais
- Marcas de Carros
- Cidades Portuguesas
- Elementos Químicos
- Planetas
- Capitales do Mundo
- Comidas Portuguesas
- Ferramentas
- Linguagens de Programação
- Desportos
- Oceanos e Mares
- Corpos Humanos
- Tecnologias
- Reinos Animais
- Festividades
- Monumentos Mundiais
- Ferramentas de Cozinha
- Verbos em Português
