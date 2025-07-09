#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); //take input for array
        }
        for (int i = 0; i < q; i++) {
            int x;
            scanf("%d", &x);    //take input for enchantment
            int power = 1 << x;
            int add = 1 << (x - 1);     // 2^(x - 1)
            for (int j = 0; j < n; j++) {
                if (a[j] % power == 0) {      //add if divisible by power
                    a[j] += add;
                }
            }
        }
        for (int i = 0; i < n; i++) { //print final
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
