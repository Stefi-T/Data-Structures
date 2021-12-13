#include<stdio.h>
#define N 5
int a[N];
void largest();
void smallest();
void reverse();
void sum();
void mean();
void main()
{
char choice;
printf("Enter the elements of the array");
for(int i=0;i<=(N-1);i++)
{
scanf("%d",&a[i]);
}
printf("Operations are:\n");
printf("1.Largest element in the array\n2.Smallest element in the array\n3.Reverse of the array\n4.Sum of the array elements\n5.Mean of the array\n");
printf("Enter the operation to be performed");
int n;
scanf("%d",&n);
switch(n)
{
case 1:largest();
break;
case 2:smallest();
break;
case 3:reverse();
break;
case 4:sum();
break;
case 5:mean();
break;
default:printf("Invalid operation");
}
}
void largest()
{
int big=0;
for(int i=0;i<=(N-1);i++)
{
if(big<a[i])
{
big=a[i];
}
}
printf("Biggest number in the array is:%d",big);
}
void smallest()
{
int small=a[0];
for(int i=0;i<=(N-1);i++)
{
if(a[i]<small)
{
small=a[i];
}
}
printf("\nSmallest number in the array is:%d",small);
}
void sum()
{
int s=0;
for(int i=0;i<=N-1;i++)
{
s=s+a[i];
}
printf("Sum of elements in the array=%d",s);
}
void reverse()
{
printf("Reverse of the array:\n");
for(int i=N-1;i>=0;i--)
{
printf("%d",a[i]);
printf("\t");
}

}
void mean()
{
int m;
int sum=0;
for(int i=0;i<=N-1;i++)
{
sum=sum+a[i];
m=sum/N;
}
printf("Mean=%d",m);

}



