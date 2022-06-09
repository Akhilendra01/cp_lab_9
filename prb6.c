#include <stdio.h>
int main(){
    printf("Enter n\n");
    int n; scanf("%d", &n);
    int a[n]; 
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    for(int i=0;i<n;i++)a[i]&=1;
    for(int i=0;i<n;i++)printf("%d ", a[i]);
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}