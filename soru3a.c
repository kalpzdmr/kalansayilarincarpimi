#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    while (n < 1) {
        scanf("%d", &n);
    }

    int elements[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &elements[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int result = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                result *= elements[j];
            }
        }
        printf("%d\n", result);
    }

    return 0;
}
