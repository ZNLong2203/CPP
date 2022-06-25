#include <stdio.h>
int main() {
    int a, b, min, max, UCLN = 0, BCNN = 0, i;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
        printf("ERROR");
    }
    else {
        min = (a < b) ? a : b;
        max = (a > b) ? a : b;
        i = 1;
        while (i <= min) {
            if(a % i == 0 && b % i == 0) {
                UCLN = i;
            }
            i++;
        }
        i = 1;
        while(i > 0) {
            if ((max * i) % a == 0 && (max * i) % b == 0) {
                BCNN = max * i;
                break;
            }
            else {
                i++;
            }
        }
        printf("%d\n%d", UCLN, BCNN);
    }
    return 0;
}