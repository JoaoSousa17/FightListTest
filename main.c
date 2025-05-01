#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "terminalGestion.h"
#include "leaderboard.h"

int main() {
    int opcao;
    char buffer[10];

    do {
        mostrarMenu();
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) break;

        // remove newline
        buffer[strcspn(buffer, "\n")] = '\0';

        if (strlen(buffer) == 0) continue;

        sscanf(buffer, "%d", &opcao);

        switch(opcao) {
            case 1:
                jogarTerminal();
                break;
            case 2:
                mostrarRegras();
                break;
            case 3:
                mostrarLeaderboard();
                break;
            case 4:
                printf("\033[1;31mA sair... Obrigado por jogar!\033[0m\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}
