#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    char buf[1];
    int len;

    while ((len = read(STDIN_FILENO, buf, sizeof(buf))) > 0) {
        if (write(STDOUT_FILENO, buf, len) != len) {
            perror("write");
            return EXIT_FAILURE;
        }
        usleep(50000);
    }
    if (len != 0) {
        perror("read");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
