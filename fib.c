#include <stdio.h>

int main() {

	int upTo = 50;
	unsigned long long int n = 0;
	unsigned long long int nn = 1;

	printf("%llu\n", n);

	for (int i = 0; i < upTo; i++) {
		printf("%llu\n", nn);
		unsigned long long int temp = n + nn;
		n = nn;
		nn = temp;
	}
}
