#include<stdio.h>
void printN(int n)
{
  if(n>0)
  {
    printN(n-1);
    printf("%d ",n);
  }
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Natural numbers till %d\n",n);
	printN(n);
 return 0;
}
