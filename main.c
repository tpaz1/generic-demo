#include <stdio.h>
#include <openssl/ssl.h>

int main() {
    printf("OpenSSL version: %s\n", OpenSSL_version(OPENSSL_VERSION));
    return 0;
}
