#include <stdio.h>

// O: Ak� je v�stup dan�ho k�du?
// V: 6
int main(int argc, char* argv[]) {

	int num[] = { 1, 56, 0, 2, 36, 3 };
	int numSize = sizeof(num) / sizeof(int);

	printf("%d\n", numSize);
}