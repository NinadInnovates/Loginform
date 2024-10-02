#include <stdio.h>
int main()
{
	void f();
	f();
	f();
	f();
}
void f()
{
	static int i=5;
	i++;
	printf("%d\n",i);
}
