#include<stdio.h>

void printRevOddN(int n)
{
  if(n>0)
  {
    printf("%d ",n*2-1);
    printRevOddN(n-1);
  }
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("%d Odd natural numbers\n",n);
	printRevOddN(n);
 return 0;
}
