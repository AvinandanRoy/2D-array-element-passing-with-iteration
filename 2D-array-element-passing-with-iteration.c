#include<stdio.h>
const int M = 3;
const int N = 4;

int elementSummation(int a[M][N])
{
    int sum = 0 ;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            sum += a[i][j];
        }
    }
    return sum ;
}

int print2DArrayElement(int a[M][N])
{
    for(int i = 0 ; i < 3 ; i++){
        for( int j = 0 ; j < 4 ; j++){
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int array[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int sum = elementSummation(array);
    printf("%d\n",sum);
    print2DArrayElement(array);
}
