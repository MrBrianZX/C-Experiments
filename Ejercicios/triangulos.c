//Este programa te dice que tipo de triangulo se forma al poner 3 lados.
#include<stdio.h>

int isEquilatero(int ladoA, int ladoB, int ladoC);
int isRectangulo(int ladoA, int ladoB, int ladoC);
int isIsoceles(int ladoA, int ladoB, int ladoC);

int main(){
    int a, b, c;
    a = 5;
    b = 6;
    c = 5;
    if(isEquilatero(a,b,c))
        printf("El triangulo es equilatero");
    else 
        if(isRectangulo(a,b,c))
            printf("El triangulo es escaleno");
        else 
            if(isIsoceles(a,b,c))
                printf("El triangulo es isoceles \n");
            else
                printf("No se puede formar un triangulo");
    return 0;
}

int isEquilatero(int ladoA, int ladoB, int ladoC){
    int flag = 0;

    if(ladoA == ladoB && ladoB == ladoC)
        flag = 1;

    return flag;
}

int isRectangulo(int ladoA, int ladoB, int ladoC){
    int flag = 0, pruebaA, pruebaB, pruebaC;

    ladoA = ladoA * ladoA;
    ladoB = ladoB * ladoB;
    ladoC = ladoC * ladoC;

    pruebaA = ladoA - ladoB -ladoC;
    pruebaB = ladoB - ladoA -ladoC;
    pruebaC = ladoC - ladoB -ladoA;

    if(pruebaA == 0 || pruebaB == 0 || pruebaC == 0)
        flag = 1;
    
    return flag;
}

int isIsoceles(int ladoA, int ladoB, int ladoC){
    int flag = 0;

    if((ladoA + ladoB > ladoC) || (ladoA + ladoC > ladoB)  || (ladoC + ladoB > ladoA))
        flag = 1;

    return flag;
}