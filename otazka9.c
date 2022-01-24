#include <stdio.h>

// O: Aký je výstup daného kódu?
// V: 3
int main(int argc, char* argv[]) {

	int num[] = { 36, 13, 0, 56, 8, 2, 1, 3 };

	int numSize = sizeof(num) / sizeof(int);
	for (int i = 0; i < numSize; i++)
	{
		if (num[i] == 3)
		{
			printf("%d ", num[i]);
		}
	}
	return 0;
}