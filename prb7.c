#include <stdio.h>
int main(){
    printf("Enter r\n");
    int n; scanf("%d", &n);
    int a[n];
    printf("Enter array elements");
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    int b[n];
    for(int i=0;i<n;i++)b[i]=a[i];
    for(int i=0;i<n;i++)printf("%d ", b[i]);
    return 0;
}