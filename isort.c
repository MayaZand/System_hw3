
#include "isort.h"

//gets a pointer to an index in array and shifting i cells to the right 
void shift_element (int* p, int i)
{
int *j=p;
j=j+(i+1);

while(i>0)
{
  *j=*(j-1);
  i--;
  j=j-1;
}
*j=0;
}

//get an array and the length of the array and using insetryion 
void insertion_sort(int *arr, int len)
{

for(int i=1;i<len;i++)
{
  int val=arr[i];
  int j=0;

  while(j<i&&arr[j]<val)
  {
    j++;
  }
  if(j<i)
  {
    int temp = arr[i];
    int *p = &arr[j-1];
    shift_element(p, i-j);
    arr[j]=temp;
  }
}

}