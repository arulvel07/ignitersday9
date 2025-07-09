#include <stdio.h>
int main() {
    //all 8 scout l shape moves for (a, b) or (b, a)
    int dx[8], dy[8]; //array in which they are stored
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        int x1, y1, x2, y2;
        scanf("%d %d", &a, &b);
        scanf("%d %d", &x1, &y1); // Monument 1
        scanf("%d %d", &x2, &y2); // Monument 2
        dx[0] = a; dy[0] = b;
        dx[1] = a; dy[1] = -b;
        dx[2] = -a; dy[2] = b;
        dx[3] = -a; dy[3] = -b;

        dx[4] = b; dy[4] = a;
        dx[5] = b; dy[5] = -a;
        dx[6] = -b; dy[6] = a;
        dx[7] = -b; dy[7] = -a;
        // Store all reachable positions to (x1, y1)
        int count = 0;
        int k = (a == b) ? 4 : 8;     //assuming a k to run the loops either 4 or 8 times, because when a==b, we will get duplicate values
        for (int i = 0; i < k; i++) {
            int px = x1 + dx[i];
            int py = y1 + dy[i];
            
            // Check if same move also reaches (x2, y2)
            for (int j = 0; j < k; j++) {
                int qx = x2 + dx[j];
                int qy = y2 + dy[j];
                 if (px == qx && py == qy) {
                    count++;
                    break; // no need to check further
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

