#include <stdio.h>
#include "ansi_escape.h"

struct Profile {
        long long unsigned int userID;
        int displayColor[3];
        char userName[];
};

int main (int argc, char *argv[]) {
    printf(ANSI_FG_BBLUE ANSI_BLINK "Powered by Neo for C/C++\n" ANSI_RESET);
    return 0;
}