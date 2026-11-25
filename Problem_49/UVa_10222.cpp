#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char decode(char c){
    if(c >= 'A' && c <= 'Z'){
        c = c -'A' + 'a';
    }
    const char *row[] = {
        "`1234567890-=",
        "qwertyuiop[]\\",
        "asdfghjkl;'",
        "zxcvbnm,./"
    };
    for(int i = 0;i < 4;i++){
        for(int j = 2;row[i][j] !='\0';j++){
            if(row[i][j] == c){
                return row[i][j-2];
            }
        }
    }
    return c;
}
int main() {
    char s[1005] = {0};
    while(fgets(s,sizeof(s),stdin)!=NULL){
        s[strcspn(s,"\n")] = '\0';
        for(int i = 0;s[i]!= '\0';i++){
            if(s[i] == ' '){
                printf(" ");
            }
            else{
                printf("%c",decode(s[i]));
            }
        }
        printf("\n");
    }
    return 0;
}