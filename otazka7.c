#include <stdio.h>

// O: Aký je výstup daného kódu?
// V: 100 99 98 97 96
int main(int argc, char* argv[]) {

    for (int i = 100; i > 95; i--) {
        printf("%d ", i);
    }

    return 0;
}