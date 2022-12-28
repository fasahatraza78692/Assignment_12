#include<stdio.h>

void printEvenN(int n)
{
  if(n>0)
  {
    printEvenN(n-1);
    printf("%d ",n*2);
  }
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("%d Even natural numbers\n",n);
	printEvenN(n);
 return 0;
}
