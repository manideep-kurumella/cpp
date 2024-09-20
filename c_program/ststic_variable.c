// C Program to illustrate the static variable lifetime
#include <stdio.h>

// function with static variable
static int count = 10;
int fun()
{
	static int count = 0;
	count++;
	return count;
}

int fun2()
{
	count++;
	return count;
}
int main()
{
	int a=10,b,c,d,e;
	printf("%d ", fun());
	printf("%d ", fun2());
    printf("%d ", fun());
	printf("%d ", fun2());
    printf("%d ", fun());
	printf("%d ",a);
	return 0;
}
