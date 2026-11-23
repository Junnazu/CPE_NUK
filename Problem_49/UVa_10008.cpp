#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int c;
    char letter[26] = {0};
    int count[26] = {0};
    for(int i = 0; i < 26;i++){
        letter[i] = i + 'A';
        count[i] = 0;
    }
    while((c = getchar())!= '\n' && c != EOF){
    }
    char ch[4096];
    for(int row = 0;row < n;row++){
        if(fgets(ch,sizeof(ch),stdin) == NULL){
            break;
        }
    for (int j = 0;ch[j] != '\0';j++){
        char c = ch[j];
        if(c >= 'a'  && c <= 'z'){
            c = c - 'a' + 'A';
        }
        if(c >= 'A' && c <= 'Z'){
            count [c - 'A']++;
        }
    }
    }
    for(int a = 0;a < 26; a++){
        for(int b = a + 1; b < 26;b++){
            if((count [a] == count[b] && letter [b] < letter[a])|| count [b] > count [a]){
                int temp_count = count [a];
                count [a] = count [b];
                count [b] = temp_count;
                
                char temp_letter = letter [a];
                letter [a] = letter [b];
                letter [b] = temp_letter;
            }
        }
    }
    for (int d = 0;d<26;d++){
        if(count [d]>0){
            printf("%c %d\n",letter[d],count[d]);
        }
    }
    return 0;
}