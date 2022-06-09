#include <stdio.h>
int power(int n, int p){
    if(p==0)return 1;
    return n*power(n, p-1);
}
int main(){
    printf("Enter power n, p:\n");
    int n, p; scanf("%d %d", &n, &p);
    printf("%d to power %d = %d", n, p, power(n, p));
    printf("\nAkhilendra Pratap 21H013");
    return 0;
}