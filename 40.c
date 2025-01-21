#include  <stdio.h>

int main(void)
{
    int n, i;
    int *score;
    printf("Number of scores: ");
    scanf("%d", &n);

    score = (int *)malloc(sizeof(int)*n);

    for(i=0; i<n; i++){
       printf("score: ");
       scanf("%d", &score[i]);
    }
    return 0;
}