#include <unistd.h>

int main() {

    char c;
    while (read(STDIN_FILENO, &c))

    return 0;
}