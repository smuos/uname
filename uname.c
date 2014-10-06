#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h> //1) added necessary .h folder

int main(int argc, char *argv[]) {

        struct utsname ubuffer; //uname_struct --> utsname

    // Check for proper usage
    if (argc != 1) {
        fprintf(stderr, "%s: Aborting, not enough arguments.\n", argv[0]);
        return (-1);
    }

    uname(&ubuffer);

    printf("System name: %s\n", ubuffer.sysname);
    //added following lines:
    printf("Host name: %s\n", ubuffer.nodename);
    printf("OS release: %s\n", ubuffer.release);
    printf("OS version: %s\n", ubuffer.version);
    printf("CPU type: %s\n", ubuffer.machine);


    return 0;
}
