#include<stdio.h>

void printEvenRevN(int n)
{
  if(n>0)
  {
    printf("%d ",n*2);
    printEvenRevN(n-1);
  }
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("%d Even natural numbers in revrse order\n",n);
	printEvenRevN(n);
 return 0;
}
