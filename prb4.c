#include <stdio.h>
int main(){
    printf("Enter n\n");
    int n; scanf("%d", &n);
    int a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)scanf("%d", &a[i]);
    int r=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++)if(a[i]==a[j])cnt++;
        if(cnt>1)r++;
    }
    printf("repeated elements=%d", r/2);
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}