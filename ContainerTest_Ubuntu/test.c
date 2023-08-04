#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    long lWork1;
    char cID[5] = {0x4A, 0xDD, 0x3F, 0xE9, 0x01};

    lWork1 = (cID[4] & 0xFF) * 0x100000000 +
             (cID[3] & 0xFF) * 0x1000000 +
             (cID[2] & 0xFF) * 0x10000 +
             (cID[1] & 0xFF) * 0x100 +
             (cID[0] & 0xFF);

    printf("lWork1 = [%ld]\n", lWork1);

    printf("cID[4] & 0xFF) * 0x100000000 = [%ld]\n", ((cID[4] & 0xFF) * 0x100000000));
    printf("cID[3] & 0xFF) * 0x1000000 =   [%ld]\n", ((cID[3] & 0xFF) * 0x1000000));
    printf("cID[2] & 0xFF) * 0x1000 =      [%ld]\n", ((cID[2] & 0xFF) * 0x10000));
    printf("cID[1] & 0xFF) * 0x100 =       [%ld]\n", ((cID[1] & 0xFF) * 0x100));
    printf("cID[0] & 0xFF)         =       [%ld]\n", ((cID[0] & 0xFF)));

    return (0);
    
}
