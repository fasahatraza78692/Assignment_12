#include<stdio.h>
void Binary(int n)
{
	if(n==0)
	  return 0;
	Binary(n/2);
	printf("%d",n%2);
}
int main()
{
	int n;
	printf("Enter a decimal number\n");
	scanf("%d",&n);
	printf("Binary of %d = ",n);
	Binary(n);
 return 0;
}
