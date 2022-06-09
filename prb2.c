#include <stdio.h>
int main(){
    printf("Enter n\n");
    int n; scanf("%d", &n);
    int a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    int m=a[0];
    for(int i=1;i<n;i++)m=a[i]>m?a[i]:m;
    printf("%d", m);
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}