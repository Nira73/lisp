// READ - EVALUATE - PRINT CYCLE
#include <stdio.h>

// declare a buffer for user input of size 2048
static char input[2048];

int main(int argc, char** argv) {
    //print version and exit info
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+C to Exit\n");

    //infinite loop
    while(1) {
        //output prompt
        fputs("lispy> ", stdout);

        //read a line of user input of max size 2048
        fgets(input, 2048, stdin);

        //echo input back to user
        printf("No you're a %s", input);
    }

    return 0;
}