#include <stdio.h>
#include <stdbool.h>

//function to check if a number is prime
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


//function to find the next prime greater than a given number
int next_prime(int start) {
    int num = start + 1;
    while (!is_prime(num)) {
        num++;
    }
    return num;
}


int main() {
    int t, d;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &d);
        int p1 = next_prime(d);
        int p2 = next_prime(p1 + d - 1);// p2 > p1 and p2 >= p1 + d
        printf("%d\n", p1 * p2);
    }

    return 0;
}
