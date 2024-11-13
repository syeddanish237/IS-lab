#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

int main() {
    const char *msg = "The quick brown fox jumps over the lazy dog";
    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)msg, strlen(msg), hash);

    printf("\tMD5 ENCRYPTION ALGORITHM IN C\n\n");
    printf("Input String to be Encrypted using MD5:\n\t%s", msg);
    printf("\n\nThe MD5 code for input string is:\n\t= 0x");

    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }

    printf("\n\n\tMD5 Encryption Successfully Completed!!!\n\n");
    return 0;
}
