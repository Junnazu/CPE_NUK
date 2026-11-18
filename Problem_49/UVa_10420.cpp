#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){
    return strcmp((const char*)a,(const char*)b);
}

int main(){
    char country[2005][80];
    int t;
    while(scanf("%d",&t)!=EOF){
        for(int i = 0;i < t;i++){
            scanf("%s",country[i]);
        char ch;
        while((ch = getchar())!='\n' && ch!=EOF);
        }
        qsort(country, t, sizeof(country[0]), cmp);
        int count = 1;
        for(int j = 0; j < t;j++){
            if(j < t-1 && strcmp(country[j],country[j+1]) == 0){
                count++;
            }
            else{
                printf("%s %d\n",country[j],count);
                count = 1;
            }
        }
    }
    return 0;
}