#include <stdio.h>
#include <math.h>

int main () {
    int startSize;
    int years;

    printf("Enter a size, then total: \n");
    scanf("%d %d", &startSize, &years);

    int i = startSize / 3;
    int j = startSize / 4;

    int endSize = i - j;

    printf("%d\n", endSize);

    return 0;
}