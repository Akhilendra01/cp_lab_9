#include <stdio.h>
int main(){
    printf("Enter r, c\n");
    int r, c; scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements\n");
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d", &a[i][j]);
    int x[r][c];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)x[i][j]=i>=j?a[i][j]:0;
    printf("lower diagonal matrix=\n");
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ", x[i][j]); printf("\n");}
    return 0;
}