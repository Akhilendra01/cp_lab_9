#include <stdio.h>
int main(){
    printf("Enter r, c\n");
    int r, c;
    scanf("%d %d", &r, &c);
    printf("Enter array elements\n");
    int a[r][c];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d", &a[i][j]);
    int s=0, p=1;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)s+=a[i][j], p*=a[i][j];
    printf("sum=%d\tproduct=%d", s, p);
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}