#include <stdio.h>

int main() {
    
    char nombre[45];

    printf("Ingresa las letras de tu nombre: ");
    scanf("%c", nombre);

    printf("Tu nombre es: %s\n", nombre);

    return 0;
}
