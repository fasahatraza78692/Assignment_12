#include<stdio.h>

void printSqrN(int n)
{
  if(n>0)
  {
    printSqrN(n-1);
    printf("%d ",n*n);
  }
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Squares of %d natural numbers\n",n);
	printSqrN(n);
 return 0;
}
