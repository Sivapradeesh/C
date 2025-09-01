#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
        int n, q, result=0;
        scanf("%d", &n);
        for(int i=0; i<5; i++) {
                result+=n%10;
                n/=10;
        }
        printf("%d\n", result);
}
