#include<stdio.h>

int isNumeroTriangular(int numero);
int NumeroTriangularAnterior(int numero);

int main(){
    int numero = 11;
    printf("%d",isNumeroTriangular(numero));
    printf("%d",NumeroTriangularAnterior(numero));
    return 0;
}

int isNumeroTriangular(int numero){
    int i = 1, acum = 0, flag = 0;

    while(acum != numero & acum < numero){
        acum = acum + i;
        i++;
        if(acum == numero)
            flag = 1;
    }
    return flag;
}

int NumeroTriangularAnterior(int numero){
    int i = 1, num = 0, siguiente = 0;

    while(siguiente < numero){
        num = siguiente;
        siguiente = siguiente + i;
        i++;
    }
    return num;
}