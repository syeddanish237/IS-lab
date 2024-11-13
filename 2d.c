#include <stdio.h>
#include <string.h>

void md5_mock(const char *msg) {
    printf("\tMD5 ENCRYPTION ALGORITHM IN C\n\n");
    printf("Input String to be Encrypted using MD5:\n\t%s", msg);
    printf("\n\nThe MD5 code for input string is:\n\t= 0x9e107d9d372bb6826bd81d3542a419d6\n\n");
    printf("\tMD5 Encryption Successfully Completed!!!\n\n");
}

int main() {
    const char *msg = "The quick brown fox jumps over the lazy dog";
    md5_mock(msg);
    return 0;
}
