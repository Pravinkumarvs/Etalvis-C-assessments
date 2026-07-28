//Get a number from the user, divide the number by 8, and print the remainder
#include <stdio.h>

int main(void) {
	int a;
	if (scanf("%d", &a) != 1) {
		fprintf(stderr, "Invalid input\n");
		return 1;
	}
	printf("%d\n", a % 8);
	return 0;
}