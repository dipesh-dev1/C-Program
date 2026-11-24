#include <stdio.h>

int main() {
    char job[10][10];
    int time[10], avail, tem[10], temp[10];
    int safe[10];
    int ind = 0, i, j, q, n, t;

    printf("Enter no of jobs: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", job[i]);   // ✅ fixed
        printf("Enter time: ");
        scanf("%d", &time[i]);
    }

    printf("Enter the available resources: ");
    scanf("%d", &avail);

    // Copy times and indices
    for (i = 0; i < n; i++) {
        temp[i] = time[i];
        tem[i] = i;
    }

    // Sort jobs by time (ascending)
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (temp[i] > temp[j]) {
                t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;

                t = tem[i];
                tem[i] = tem[j];
                tem[j] = t;
            }
        }
    }

    // Find safe sequence
    for (i = 0; i < n; i++) {
        q = tem[i];
        if (time[q] <= avail) {
            safe[ind] = q;
            avail -= time[q];   // ✅ fixed
            ind++;
        } else {
            printf("\nNo safe sequence for job %s\n", job[q]);
        }
    }

    // Print safe sequence
    printf("\nSafe sequence is:\n");
    for (i = 0; i < ind; i++) {
        printf("%s %d\n", job[safe[i]], time[safe[i]]);
    }

    return 0;
}