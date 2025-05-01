# Nome do executável
TARGET = fightlist

# Compilador
CC = gcc

# Flags
CFLAGS = -Wall -Wextra -std=c99

# Ficheiros fonte
SRC = main.c jogo.c terminalGestion.c utils.c leaderboard.c

# Ficheiros header
HEADERS = jogo.h terminalGestion.h utils.h leaderboard.h dicionarios.h

# Comando de build
$(TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Limpeza
clean:
	rm -f $(TARGET)
	rm -f leaderboard.txt
