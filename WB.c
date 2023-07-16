#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
    FILE *fp1, *fp2;
    uint32_t a, b, sum;

    fp1 = fopen(argv[1], "rb");
    fp2 = fopen(argv[2], "rb");

    fread(&a, sizeof(a), 1, fp1);
    fread(&b, sizeof(b), 1, fp2);

    a = ntohl(a); //netwoork -> host 
    b = ntohl(b);  

    sum = a + b;

    printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", a, a, b, b, sum, sum);
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}
