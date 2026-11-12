#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void hanoi(int n,int a,int b,int c) {
	if (n == 1) {
		printf("%d -> %d\n", a, c);
	}
	else {
		hanoi(n-1, a, c, b);
		hanoi(1, a, b, c);
		hanoi(n - 1, b, a, c);
	}
}

int main(void) {
	int n;
	printf("Please input n:");
	scanf("%d", &n);
	hanoi(n, 1, 2, 3);
}