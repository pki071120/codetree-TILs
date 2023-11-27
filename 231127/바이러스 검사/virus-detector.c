#include <stdio.h>

int main() {
    long long rest = 0;
    scanf("%lld", &rest);

    long long cust[rest];
    for(int i = 0; i < rest; i++) {
        scanf("%lld", &cust[i]);
    }

    long ck[2];
    scanf("%lld %lld", &ck[0], &ck[1]);

    long long ldr=0;  // Initialize arrays
    long long mbr[rest];

    for(int i = 0; i < rest; i++) {
        if(cust[i] < ck[0]) {
            ldr = 1;
            mbr[i]=0;
            break;
        } else {
            ldr = cust[i] / ck[0];
        }

        int mod = cust[i] % ck[0];

        if(mod < ck[1]) {
            mbr[i] = 1;
        } else {
            mbr[i] = mod / ck[1];
        }
    }

    long long total = 0;
    for(long long i = 0; i < rest; i++) {
        total = total + ldr + mbr[i];
    }
    printf("%lld", total);

    return 0;
}