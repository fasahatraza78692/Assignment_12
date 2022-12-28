#include<stdio.h>
void printRevN(int n)
{
  if(n>0)
  {
    printf("%d ",n);
    printRevN(n-1);
  }
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Natural numbers till %d in reverse order\n",n);
	printRevN(n);
 return 0;
}
