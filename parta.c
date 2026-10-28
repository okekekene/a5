#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    // Declare the buffer to use. Do NOT change!
    enum { BUFSIZE = 8 };
    char buffer[BUFSIZE];
    ssize_t bytes_read;
    int upper = 0, lower = 0, number = 0, space = 0, others = 0;

    if (argc != 2){
        fprintf(stderr,"USAGE: parta FILEIN\n");
        return 1;
    }
