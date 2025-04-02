#include <stdio.h>

int Cuadrado (int numero);

void Cuadrado_Referencia (int *numero);

void Mostrar_contenido_Y_Direccion (int *numero);

void invertir (int *numero1 , int *numero2);

void Orden (int *numero1, int *numero2);

int main(){

    int Numero_a_Cuadratizar, Numero_Cuadratizado, PrimerNumero, SegundoNumero;

    printf("Ingrese el numero al que desea calcular su cuadrado: ");
    scanf("%d",&Numero_a_Cuadratizar);

    Numero_Cuadratizado = Cuadrado(Numero_a_Cuadratizar);

    printf("El cuadrado de %d es: %d\n\n", Numero_a_Cuadratizar, Numero_Cuadratizado);

    //--- Fin  de la Prueba de la primera funcion de Cuadrado ---//

    printf("El cuadrado de %d es:",Numero_a_Cuadratizar);

    Cuadrado_Referencia (&Numero_a_Cuadratizar);

    printf(" %d", Numero_a_Cuadratizar);

    //--- Fin de la Prueba de la Segundo Funcion de Cuadrado por referencia ---//

    printf("\n\nIngrese el numero al que desea saber su valor y direccion de memoria: "); // medio obvio pedir un valor que mostrar jsjsjsjs
    scanf("%d",&Numero_a_Cuadratizar);

    Mostrar_contenido_Y_Direccion(&Numero_a_Cuadratizar);

    //--- Fin de la prueba de la Funcion de muestras ---//

    printf("\n\nIngrese el valor del primer numero a invertir de posicion: ");
    scanf("%d",&PrimerNumero);

    printf("\n\nIngrese el valor del segundo numero a invertir de posicion: ");
    scanf("%d",&SegundoNumero);

    invertir(&PrimerNumero,&SegundoNumero);

    printf("\n\nEl valor del primer numero ingresado es: %d y el del Segundo numero ingresado es: %d", PrimerNumero, SegundoNumero);

    //--- Fin de la prueba de la funcion invertir ---//

    printf("\n\nIngrese el valor del primer numero para comprobar orden: ");
    scanf("%d",&PrimerNumero);

    printf("\n\nIngrese el valor del segundo numero para comprobar orden: ");
    scanf("%d",&SegundoNumero);

    Orden(&PrimerNumero,&SegundoNumero);

    printf("\n\nEl valor mas pequeño es: %d y el valor mas grande es: %d", PrimerNumero, SegundoNumero);


return 0;

}

int Cuadrado (int numero){

    int Numero_Cuadrado = 0;

    Numero_Cuadrado = numero * numero;
    
    return Numero_Cuadrado;

}

void Cuadrado_Referencia (int *numero){

    *numero = (*numero) * (*numero);
    
    return;

}

void Mostrar_contenido_Y_Direccion (int *numero){

    printf("\nEl contenido de la variable es: %d\n", *numero);
    printf("La direccion de memoria de la variable es: %p\n", numero);

    return;
}

void invertir (int *numero1 , int *numero2){

    int numero3;

    numero3 = *numero1;

    *numero1 = *numero2;

    *numero2 = numero3;
    
    return;

}

void Orden (int *numero1, int *numero2){

    int numero3;

    if (*numero1 < *numero2)
    {
        return;
    }
    else
    {
        
        numero3 = *numero1;

        *numero1 = *numero2;

        *numero2 = numero3;

    }
    
    return;
}