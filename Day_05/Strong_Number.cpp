#include <stdio.h>

int main() {
    int n, temp, r, sum = 0, i, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        r = temp % 10;
        f = 1;
        for(i = 1; i <= r; i++) {
            f = f * i;
        }
        sum = sum + f;
        temp = temp / 10;
    }
    if(sum == n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}