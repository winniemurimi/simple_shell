#include "shell.h"

void print_win(const char *infor) {
    write(STDOUT_FILENO, infor, strlen(infor));
}

write(STDOUT_FILENO, &infor, strlen(infor))
