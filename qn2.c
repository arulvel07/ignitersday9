#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[100];  //since max is 100
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int max = 0;                 //max value
        for (int i = 0; i < n; i++) {  //start subarray
            int curr = a[i];
            if (curr > max) max = curr;
            
            for (int j = i + 1; j < n; j++) { //completes subarray
                curr = curr & a[j];
                if (curr > max) max = curr; //if the curr value is grater than the max, then set max equals cur
                if (curr == 0) break;
            }
        }
    printf("%d\n", max);
    }
    return 0;
}
