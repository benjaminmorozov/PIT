#include <stdio.h>

// O: Ak� je v�stup dan�ho k�du?
// V: 100 99 98 97 96
int main(int argc, char* argv[]) {

    for (int i = 100; i > 95; i--) {
        printf("%d ", i);
    }

    return 0;
}