#include <stdio.h>

// O: Aký je výstup daného kódu?
// V: 1
int main(int argc, char* argv[]) {

	int num = 12;
	int numSize = sizeof(num) / sizeof(int);

	printf("%d\n", numSize);
}