#include <stdio.h>

int isPrime(int n) {
    int cnt = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            cnt++;
            if((n / i) != i) cnt++;
        }
    }
    if(cnt == 2) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if(isPrime(n)) printf("%d is a prime number.\n", n);
    else printf("%d is not a prime number.\n", n);
    return 0;
}
