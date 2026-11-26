#include <stdio.h>

int main(){
    long long s;
    long long d;
    while(scanf("%lld %lld",&s,&d)==2){
        long long i;
        for(i = s;d > 0;i++){
            d -= i;
        }
        printf("%lld\n",i-1);
    }
    return 0;
}