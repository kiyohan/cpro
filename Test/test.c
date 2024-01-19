#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n ;
    scanf("%d",&n);
    int count = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            int lcm = (a * b) / gcd(a, b);
            int g = gcd(a, b);
            if (lcm / g <= 3)
                count++;
        }
    }

    printf("Number of pairs: %d\n", count);

    return 0;
}