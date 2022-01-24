#include <stdio.h>

// O: Aký je výstup daného kódu?
// V: 654
int main(int argc, char* argv[]) {

	int num[] = {5, 10, 15, 156, 352, 654, 25, 23, 12, 11};

	int numSize = sizeof(num) / sizeof(int);

	int maxNum = 0;
	for (int i = 0; i < numSize; i++)
	{
		if (num[i] > maxNum)
		{
			maxNum = num[i];
		}
	}
	printf("%d\n", maxNum);
}