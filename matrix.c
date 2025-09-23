#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("enter the number of rows and columns of the matrices:");
scanf("%d %d",&m,&n);
int a[m][n],b[m][n],sum[m][n],sub[m][n],mul[m][n];
printf("enter elements of matrix a:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("enter elements of matrix b:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);

for(i=0;i<m;i++)
for(j=0;j<n;j++)
sum[i][j]=a[i][j]+b[i][j];


for(i=0;i<m;i++)
for(j=0;j<n;j++)
sum[i][j]=a[i][j]-b[i][j];


if(m==n)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
mul[i][j]=0;
for(k=0;k<n;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
}


printf("\n matrix addition:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",sum[i][j]);
printf("\n");
}





printf("\n matrix subtraction:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",sub[i][j]);
printf("\n");
}



if(m==n)
{
printf("\n matrix multiplication:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d", mul[i][j]);
printf("\n");
}
}
else
{
printf("\n matrix multiplication not possible (not square matrices).\n");
}
return 0;
}
