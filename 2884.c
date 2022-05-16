#include <stdio.h>

int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	if (b < 45) {
		if (a == 0) {
			a = 23;
		}
		else {
			a = a - 1;
		}

		b = 60 + (b - 45);
	}
	else {
		b = b - 45;
	}

	printf("%d %d", a, b);
	return 0;
}
