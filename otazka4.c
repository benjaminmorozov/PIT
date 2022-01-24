#include <stdio.h>

// O: Aký je výstup daného kódu?
// V: 0
int main(int argc, char* argv[]) {

	int num[] = { 4, 5, 82, 1, 3, 0, 6, 12 };
	int numSize = sizeof(num) / sizeof(int);

	int min = num[0];
	for (int i = 1; i < numSize; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
		}
	}
	printf("%d\n", min);
}