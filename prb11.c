#include <stdio.h>
int main(){
    printf("Enter r, c\n");
    int r, c; scanf("%d %d", &r, &c);
    printf("Enter matrix elements\n");
    int a[r][c];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d", &a[i][j]);
    int b[c][r];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)b[j][i]=a[i][j];
    printf("T(A)=\n");
    for(int i=0;i<c;i++){for(int j=0;j<r;j++)printf("%d ", b[i][j]); printf("\n");}
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}