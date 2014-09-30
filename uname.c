#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>

int main(int argc, char *argv[]) {

    struct utsname ubuffer;

    // Check for proper usage
    if (argc != 1) {
        fprintf(stderr, "%s: Aborting, not enough arguments.\n", argv[0]);
        return (-1);
    }

    uname(&ubuffer);

    printf("System name: %s\nHost name: %s\nOS Release: %s\nOS Version: %s\nCPU Type: %s\n", 
            ubuffer.sysname, ubuffer.nodename, ubuffer.release, ubuffer.version, ubuffer.machine);

    return 0;
}
