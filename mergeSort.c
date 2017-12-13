#include<stdio.h>

void merge (int[],int,int,int);
void mergeSort(int[],int,int);

int main (int argc, char*argv[])
{

int example[] = {4,6,3,1,7,2,5};
mergeSort(example,0,sizeof(example)/sizeof(example[0])-1);
for(int i =0; i<=sizeof(example)/sizeof(example[0])-1;i++)
{
printf("%d\n",example[i]);
}
return 0;
}

void  merge(int uSortedArr[], int lo, int mid, int hi)
{
// uSortedArr[lo,mid] is sorted uSortedArr[mid+1,hi] is sorted
int i,j,k; //index for first part of array, second part of array, temp array
i = lo;
j=mid+1;
k=lo;
int temp[hi+1];
while(i<=mid||j<=hi)
{
if(i>mid)temp[k++] = uSortedArr[j++];
else if (j>hi) temp[k++] = uSortedArr[i++];
else if (uSortedArr[i]<uSortedArr[j])temp[k++] = uSortedArr[i++];
else temp[k++] = uSortedArr[j++];
}
for(i=lo;i<=hi;i++) uSortedArr[i] = temp[i];


}


void mergeSort(int uSortedArr[], int lo, int hi)
{
int mid;
mid = (lo+hi)/2;
if(lo<hi)
{
mergeSort(uSortedArr,lo,mid);
mergeSort(uSortedArr, mid+1,hi);
merge(uSortedArr, lo,mid,hi);
}

}


