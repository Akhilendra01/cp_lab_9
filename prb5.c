#include <stdio.h>
int main(){
    printf("Enter n\n");
    int n;
    int a[n], b[n];
    printf("Enter elements of array A\n");
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    printf("Enter elements of array B\n");
    for(int i=0;i<n;i++)scanf("%d", &b[i]);
    for(int i=0;i<n;i++){
        a[i]^=b[i]; b[i]^=a[i]; a[i]^=b[i];
    }
    for(int i=0;i<n;i++)printf("%d ", a[i]);
    for(int i=0;i<n;i++)printf("%d ", b[i]);
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}