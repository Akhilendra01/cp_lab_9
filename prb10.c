#include <stdio.h>
int main(){
    int m, n, p, q;
    printf("Enter Dimension of Matrix A: \n");
    scanf("%d %d", &m, &n);
    printf("Enter Dimension of Matrix B: \n"); 
    scanf("%d %d", &p, &q);
    if(n!=p){
        printf("Can\'t multiply");
        return 0;
    }
    int a[m][n], b[p][q];
    printf("Enter Matrix A: \n");
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d", &a[i][j]);
    printf("Enter Matrix B: \n");
    for(int i=0;i<p;i++)for(int j=0;j<q;j++)scanf("%d", &b[i][j]);
    int r[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            r[i][j]=0; 
            for(int k=0;k<p;k++)r[i][j]+=a[i][k]*b[k][j];
        }
    }
    printf("AXB=\n");
    for(int i=0;i<m;i++){for(int j=0;j<q;j++)printf("%d ", r[i][j]); printf("\n");}
    printf("\nAkhilendra Pratap 21H013"); 
    return 0;
}