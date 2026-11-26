#include <stdio.h>
#include <math.h>

int main(){
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while(t--){
        long long s,d;
        scanf("%lld %lld",&s,&d);
        int origin_s,origin_d;
        if(s < d || (s+d) % 2 != 0){
            printf("impossible\n");
        }
        else{
            origin_s = (s+d)/2;
            origin_d = (s-d)/2;
            printf("%d %d\n",origin_s,origin_d);
        }
    }
    return 0;
}