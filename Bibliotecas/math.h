typedef struct{
    float array[];
    float magnitude;
    float angle;
    int size;
} Vector;

/*Operaciones Escalares*/
int arrayAdd(Vector vectorA){
    int i;
    int sum = 0;
    for(i=0; i<vectorA.size; i++)
        sum += vectorA.array[i];
    return sum;
}

int arraySubtract(Vector vectorA){
    int i;
    int sum = 0;
    for(i=0; i<vectorA.size; i++)
        sum -= vectorA.array[i];
    return sum;
}

int arrayDotProduct(Vector vectorA, Vector vectorB){
    int sum = 0, i;
    if(vectorA.size == vectorB.size)
        for (i = 0; i < vectorA.size; i++)
            vectorA.array[i] += vectorA.array[i]*vectorB.array[i];
    return sum;
}

int promArray(Vector vectorA){
    return arrayAdd(vectorA)/vectorA.size;
}

/*Operaciones Vectoriales*/
void arrayAdd(Vector vectorA, Vector vectorB){
    int i;
    if(vectorA.size == vectorB.size)
        for (i = 0; i < vectorA.size; i++)
            vectorA.array[i]=vectorA.array[i]+vectorB.array[i];
}

void arraySustract(Vector vectorA, Vector vectorB){
    int i;
    if(vectorA.size == vectorB.size)
        for (i = 0; i < vectorA.size; i++)
            vectorA.array[i]=vectorA.array[i]-vectorB.array[i];
}



void arrayScalarMultiplication(Vector vectorA, int num){
    int sum = 0, i;
    for (i = 0; i < vectorA.size; i++)
        vectorA.array[i]=num*vectorA.array[i];
}
