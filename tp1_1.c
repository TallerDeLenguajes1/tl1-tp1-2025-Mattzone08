#include <stdio.h>

int main(){


    printf("Hola Mundo\n\n");
    printf("Hello World\n\n");
    printf("Ciao Mondo\n\n");

    int *puntero;
    int numero = 0;

    puntero = &numero;

    printf("El contenido del puntero es: %d \n\n", *puntero);

    printf("La direccion de memoria almacenada por el puntero es: %p \n\n", puntero);

    printf("La direccion de memoria de la variable es: %p \n\n", &numero);

    printf("La direccion de memoria del puntero es: %p \n\n", &puntero);

    printf("El tamaño de memoria utilizado por la variable es de:  %d Bytes", sizeof(numero));

    return 0;
}