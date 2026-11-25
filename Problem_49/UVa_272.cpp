#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    int is_left = 1;
    while(scanf("%c",&ch)!=EOF){
        if(ch == '"'){
        if(is_left == 1){
            printf("``");
            is_left = 0;
        }
        else{
            printf("''");
            is_left = 1;
        }
        }
        else{
            printf("%c",ch);
        }
    }
    return 0;
}