#include <stdio.h>

int main()
{
	char c;
	short s;
	int i;
	long l;
	long int li;
	long long int lli;

	printf("sizeof(char) = %d\n", sizeof(c));
	printf("sizeof(short) = %d\n", sizeof(s));
	printf("sizeof(int) = %d\n", sizeof(i));
	printf("sizeof(long) = %d\n", sizeof(l));
	printf("sizeof(long int) = %d\n", sizeof(li));
	printf("sizeof(long long int) = %d\n", sizeof(lli));
}
