#include <stdio.h>

int main(void) {
    unsigned int uint32 = 0x12345678U;
    unsigned char * p_uint8;

    printf("uint32: 0x%x\n", uint32);

    p_uint8 = (unsigned char *)&uint32;
    printf("p_uint8[0]: 0x%x\n", p_uint8[0]);
    printf("p_uint8[1]: 0x%x\n", p_uint8[1]);
    printf("p_uint8[2]: 0x%x\n", p_uint8[2]);
    printf("p_uint8[3]: 0x%x\n", p_uint8[3]);

    return 0;
}