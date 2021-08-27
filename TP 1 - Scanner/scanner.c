#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

int get_token (char *cadena) {

    int i=0;
    
    int caracter;
    
    caracter=getchar();

    while (caracter!=EOF) {

        while (caracter!=',' && !isspace(caracter)) {
        cadena[i++]=caracter;
        caracter=getchar();
        }

        if (caracter==',' && i>0) {
        ungetc(caracter,stdin);
        cadena[i]='\0';
        return CADENA;
        }

        if (caracter==',' && i==0) {
        cadena[i]=',';
        cadena[++i]='\0';
        return COMA;
        }

        if (isspace(caracter) && i>0) {
        cadena[i]='\0';
        return CADENA;
        }

        if (isspace(caracter) && i==0) {
        caracter=getchar();
        }
    }

    return FDT;

}
