#include <stdio.h>

// O: Ak� je v�stup dan�ho k�du?
// V: 5 6 7 8 9
int main(int argc, char* argv[]) {

    for (int i = 0; i < 10; i++) {
        if (i > 4) {
            printf("%d ", i);
        }
    }

    return 0;
}