#include <stdio.h>

// O: Ak� je v�stup dan�ho k�du?
// V: 1
int main(int argc, char* argv[]) {

	int num = 12;
	int numSize = sizeof(num) / sizeof(int);

	printf("%d\n", numSize);
}