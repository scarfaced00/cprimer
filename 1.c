#include <stdio.h>

int main() {
    int N;
    scanf("%d ", &N);
    int num[N], max = -1000001, min = 1000001;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }
    printf("%d %d", min, max);

}
