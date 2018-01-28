#include <stdio.h>
#include <stdint.h>

int main()
{
	printf("sizeof(char) = %d\n", (int)sizeof(char));
	printf("sizeof(short) = %d\n", (int)sizeof(short));
	printf("sizeof(int) = %d\n", (int)sizeof(int));
	printf("sizeof(long) = %d\n", (int)sizeof(long));
	printf("sizeof(long int) = %d\n", (int)sizeof(long int));
	printf("sizeof(long long int) = %d\n", (int)sizeof(long long int));
	printf("\n");
	printf("sizeof(int8_t) = %d\n", (int)sizeof(int8_t));
	printf("sizeof(int16_t) = %d\n", (int)sizeof(int16_t));
	printf("sizeof(int32_t) = %d\n", (int)sizeof(int32_t));
	printf("sizeof(int64_t) = %d\n", (int)sizeof(int64_t));
	printf("\n");
	printf("sizeof(int_fast8_t) = %d\n", (int)sizeof(int_fast8_t));
	printf("sizeof(int_fast16_t) = %d\n", (int)sizeof(int_fast16_t));
	printf("sizeof(int_fast32_t) = %d\n", (int)sizeof(int_fast32_t));
	printf("sizeof(int_fast64_t) = %d\n", (int)sizeof(int_fast64_t));
	printf("\n");
	printf("sizeof(float) = %d\n", (int)sizeof(float));
	printf("sizeof(double) = %d\n", (int)sizeof(double));
}
