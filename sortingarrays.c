#include <stdio.h>

void sort(int array[], int size)

{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)

        if (array[j] < array[j+1])
        {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }
    }
}
void printarray (int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
int main(){

    int array[] = {4, 8, 2, 7, 9, 6, 5, 3, 1};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printarray(array, size);
    return 0;
}