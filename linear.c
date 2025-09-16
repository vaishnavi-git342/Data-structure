#include<stdio.h>
int main()
{
int n,i,key,found=0;
printf("enter no of elements:");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:/n",n);
for(i=0; i<n; i++)
{
scanf("%d",& arr[i]);
}
printf("enter element to search:");
scanf("%d",& key);
for(i=0; i<n; i++)
{
if(arr[i]==key)
{
printf("element %d found at position %d\n",key,i+1);
found=1;
break;
}
}
if(found==0)
{
printf("element %d not found in the array \n",key);
}
return 0;
}
