#include <stdio.h>
#include <string.h>

int main(){
    char s[1005] = {0};
    while(scanf("%s",s)!=EOF){
        int length = strlen(s);
        if(length == 1 && s[0]=='0'){
            break;
        }
        int odd_num = 0;
        int even_num = 0;
        for(int i = 0; i < length;i++){
            int num = s[i] - '0';
            if(i % 2 == 0){
                even_num += num;
            }
            else{
                odd_num += num;
            }
        }
        if((odd_num-even_num) % 11 == 0){
            printf("%s is a multiple of 11.\n",s);
        }
        else if((odd_num-even_num)== 0){
            printf("%s is a multiple of 11.\n",s);
        }
        else{
            printf("%s is not a multiple of 11.\n",s);
        }
    }
    return 0;
}