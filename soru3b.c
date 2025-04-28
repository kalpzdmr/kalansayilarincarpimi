#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    while (n < 1) {
        scanf("%d", &n);
    }

    int elements[n];
    long long result = 1; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &elements[i]);
    }
    
    for (int i = 0; i < n; i++) {
        result *= elements[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%lld\n", result / elements[i]); 
    }

    return 0;
}
