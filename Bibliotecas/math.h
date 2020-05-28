int promArray(int array[], int size){
    int i;
    int prom = 0;
    for(i=0; i<size; i++)
        prom += array[i];
    return prom;
}