#include <stdio.h>

// O: Ak� je v�stup dan�ho k�du?
// V: 2 4 8 10 22
int main(int argc, char* argv[]) {

	int num[] = { 49, 2, 53, 49, 33, 4, 8, 10, 22  };

	int numSize = sizeof(num) / sizeof(int);

	int parNum = 0;
	for (int i = 0; i < numSize; i++)
	{
		if (num[i] > parNum && num[i]%2 == 0)
		{
			printf("%d ", num[i]);
		}
	}
	return 0;
}