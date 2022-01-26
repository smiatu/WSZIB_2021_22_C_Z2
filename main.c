#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    //Napisz funjckę, która scala naprzemiennie elementy z dwóch tablic do trzeciej. (ma działać dla każdego typu danych
    // - tablice muszą być tego samego typu, tablica wynikowa alokowana dynamicznie) Pokaż użycie tej funkcji
    // w programie (wartości tablic wygeneruj losowo).
    // Przykład: tablica1 = {1, 3, 5}; tablica2 = {2, 4, 6}; tablica wynikowa = {1, 2, 3, 4, 5, 6}

    int size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    // Generate first random array //
    int randomArray1[size],i;
    for(i=0;i<size;i++){
        randomArray1[i]=rand()%100;
    }
    printf("Elements of the array:\n");
    for(i=0;i<size;i++)
    {
        printf("Element number %d:%d\n",i+1,randomArray1[i]);
    }
    // Generate second random array //
    int randomArray2[size],j;
    for(j=0;j<size;j++){
        randomArray2[j]=rand()%100;
    }
    printf("Elements of the second array:\n");
    for(j=0;j<size;j++){
        printf("Element number %d:%d\n",j+1,randomArray2[j]);
    }
    // Insert arrays' elements subsequently into new array //
    int sumOfRandomArrays[2*size],k;
    int index = 0;
    for(k=0;k<2*size;k=k+2){
        sumOfRandomArrays[k]=randomArray1[index];
        sumOfRandomArrays[k+1]=randomArray2[index];

        index++;

    }
    // Checking new array //
    printf("Elements of new array:\n");
    for(k=0;k<2*size;k++){
        printf("Element number %d:%d\n",k+1,sumOfRandomArrays[k]);
    }
    return 0;
}