#include<stdio.h>

typedef struct NODO
{
    struct NODO *anterior;
    int dato;
} NODO;

NODO push(NODO *punto, int dato);

int main(){
    NODO pila;
    pila.anterior = NULL;

    printf("%p", pila.anterior);
    NODO pila = push(&pila, 5);

    return 0;
}

NODO push(NODO *punto, int dato){
    NODO aux;

    aux.anterior = punto;
    aux.dato = dato;

    return aux;
}

void printPila(NODO *fin){
    printf("%d \t %p", fin->dato, fin->anterior)
}