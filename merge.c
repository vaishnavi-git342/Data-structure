#include<stdio.h>
int main()
{
int size1,size2;
printf("enter the size of the first array:");
scanf("%d",&size1);
int arr1[size1];
printf("enter %d elements for the array-\n",size1);
for(int i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the size of the second array:");
scanf("%d",&size2);
int arr2[size2];
printf("enter %d elements for the second array-\n",size2);
for(int i=0; i<size2;i++)
{
scanf("%d",&arr2[i]);
}
int size3=size1+size2;
int arr3[size3];
for(int i=0;i<size1;i++)
{
arr3[i]=arr1[i];
}
for(int i=0;i<size2;i++)
{
arr3[size1+i]=arr2[i];
}
printf("merged array:");
for(int i=0;i<size3;i++)
{
printf("%d",arr3[i]);
}
return 0;
}
