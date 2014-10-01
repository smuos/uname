#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>

int main(int argc, char *argv[]) {

    struct utsname ubuffer;

    // Check for proper usage
    if (argc != 1) {
        fprintf(stderr, "%s: Aborting, too many arguments.\n", argv[0]);
        return (-1);
    }

    int rc = uname(&ubuffer);
    
    // If uname was successful print system information
    if (rc == 0) {
        printf("System name: %s\nHost name: %s\nOS Release: %s\nOS Version: %s\nCPU Type: %s\n", 
            ubuffer.sysname, ubuffer.nodename, ubuffer.release, ubuffer.version, ubuffer.machine);
        fflush(stdout);
    } 
    else return 1;

    return 0;
}
