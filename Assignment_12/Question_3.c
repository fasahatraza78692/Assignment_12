#include<stdio.h>

void printOddN(int n)
{
  if(n>0)
  {
    printOddN(n-1);
    printf("%d ",n*2-1);
  }
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("%d Odd natural numbers\n",n);
	printOddN(n);
 return 0;
}
