#include "isort.h"



int main()
{
int arr[ARR_SIZE];

for(int i=0; i<ARR_SIZE; i++)
{
    scanf(" %d", &arr[i]);
}

insertion_sort(arr, ARR_SIZE);

for(int i=0; i<ARR_SIZE-1;i++)
{

    printf("%d,", arr[i]);
}
printf("%d\n", arr[ARR_SIZE-1]);

return 0;
}