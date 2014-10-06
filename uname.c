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
    
    printf("System name: %s\n", uname -s);
    printf("Host name: %s\n", uname -n);
    printf("OS Release: %s\n", uname -r);
    printf("OS Version: %s\n", uname -v);
    printf("CPU Type: %s\n", uname -m);

    return 0;
}
