#include<stdio.h>

int divisionConRedondeo(int a, int b);

int main(){
    printf("%d",divisionConRedondeo(8,5));
    return 0;
}

int divisionConRedondeo(int a, int b){
    int division, residuo;

    division = a/b;
    residuo = (a % b) > b/2;

    return division + residuo;
}

int divisionConPrestamo(int a, int b){
    int division, residuo;

    division = a/b;
    residuo = (a % b) > b/2;

    return division + residuo;
}
