#include<stdio.h>
#include<math.h>

void fibonacci(int limite);

int main(){
    //fibonacci(100);
    printf("%d",isNumeroTriangular(11));
    printf("%d",NumeroTriangularAnterior(11));
    return 0;
}

/*int isCuadrado(int num){
    int i;

}*/

void fibonacci(int limite){
    int num, numAnt, swap;
    num = 1;
    numAnt = 0;
    
    while (numAnt < limite){
        swap = num;
        num = num + numAnt;
        printf("%d ",numAnt);
        numAnt = swap;
    }
}
