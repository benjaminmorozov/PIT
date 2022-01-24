#include <stdio.h>

// O: Aký je výstup daného kódu?
// V: 49 53 49 33
int main(int argc, char* argv[]) {

	int num[] = { 49, 2, 53, 49, 33, 4, 8, 10, 22 };

	int numSize = sizeof(num) / sizeof(int);

	int neparNum = 0;
	for (int i = 0; i < numSize; i++)
	{
		if (num[i] > neparNum && num[i] % 2 != 0)
		{
			printf("%d ", num[i]);
		}
	}
	return 0;
}