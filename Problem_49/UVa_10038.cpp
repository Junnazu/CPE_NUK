#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    int a[3005];
    int seen[3005]; 

    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            seen[i] = 0;
        }

        int isJolly = 1; 

        for (int i = 1; i < n; i++) {
            int diff = abs(a[i] - a[i - 1]);

            if (diff < 1 || diff >= n || seen[diff] == 1) {
                isJolly = 0;
                break;
            }
            seen[diff] = 1;
        }

        if (isJolly == 1) {
            printf("Jolly\n");
        } else {
            printf("Not jolly\n");
        }
    }
    return 0;
}