#include <stdio.h>
#include "scanner.h"

int main (){
    
    char *tokens[3]={"Fin de Texto.","Separador","Cadena"};

    char lexema[128];

    int token_encontrado;

    do {
        token_encontrado=get_token(lexema);

        if (token_encontrado!=FDT) {
            printf("%s: %s\n",tokens[token_encontrado],lexema);
        } else
            printf("%s\n\n",tokens[token_encontrado]);
            
    } while (token_encontrado!=FDT);
}