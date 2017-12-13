#include<stdio.h>
void insertionSort(int [], int);

int main(int argc, char*argv[])
{
int array[]={6,1,3,2,8,7,4,5};
insertionSort(array,7);

for(int i=0;i<=7;i++)
{
printf("%d\n",array[i]);
}
return 0;
}

void insertionSort(int uSortedArr[],int maxInd)
{
int temp, k;
//start with the assumption that array has only one element and add a new element so that the array is sorted
for(int j=1;j<=maxInd;j++)
{
temp = uSortedArr[j];
k = j-1;
while(k>=0 && temp<uSortedArr[k])
{
uSortedArr[k+1] = uSortedArr[k];
k--;
}
uSortedArr[k+1] = temp;

}
}

