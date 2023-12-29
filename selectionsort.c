#include <stdio.h>
int swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}
int find_min(int array[],int start, int end){
int i,j, minIndex = start;
for (int i = start + 1; i < end; i++){
if (array[i] < array[minIndex])
{
    minIndex = i;
}
}
return minIndex;
}
void selectionsort(int array[], int length){
for (int i = 0; i < length; i++)
{
    swap(&array[i], &array[find_min(array, i, length)]);
}

}
int main(int argc, char const *argv[])
{
   int array[] = {5,22,3,4,6,17,9,1,8};
    int length = 9;
    selectionsort(array, length);
    for (int i = 0; i < length; i++)
    {
        printf("\n%d", array[i]);
    }
    return 0;
}
