#include <stdio.h>
int main(){
    printf("Enter n");
    int n; scanf("%d", &n);
    int a[n];
    printf("Enter array elements");
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    int b[n];
    for(int i=0;i<n;i++)b[n-i-1]=a[i];
    for(int i=0;i<n;i++)printf("%d ", b[i]);
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}