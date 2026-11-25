#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int T;
    scanf("%d",&T);
    int Case = 1;
    while(T--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b){
            int temp = a;
            a = b;
            b = temp;
        }
        int sum = 0;
        for(int i = a;i <= b;i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
        printf("Case %d: %d\n",Case,sum);
        Case++;
    }
    return 0;
}