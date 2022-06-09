#include <stdio.h>
int main(){
    printf("Enter r, c\n");
    int r, c; scanf("%d %d", &r, &c);
    int a[r][c], b[r][c];
    printf("Enter elements of matrix A\n");
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d", &a[i][j]);
    printf("Enter elements of matrix B\n");
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d", &b[i][j]);
    int s[r][c];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)s[i][j]=a[i][j]+b[i][j];
    printf("sum=\n");
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ", s[i][j]); printf('\n');}
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}