#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int shift,reverse=0;
    scanf("%d\n",&shift);
    if(shift<0){
        shift *= -1; 
        reverse = 1;
    }
    shift %= 26;
    char line[1000000];
    scanf("%[^\n]", line);
    for(int i =0;i<strlen(line);i++){
        if('A'<=line[i] && line[i]<='Z'){
            if(reverse){
                line[i] -= shift;
                if(line[i]<'A')
                    line[i] += 26;
            }
            else{
            line[i] += shift;
            if(line[i]>'Z')
                line[i] -= 26;
            }
        }
        else if ('a'<=line[i] && line[i]<='z'){
            if(reverse){
                line[i] -= shift;
                if(line[i]<'a')
                    line[i] += 26;
            }
            else{
            line[i] += shift;
            if(line[i]>'z')
                line[i] -= 26;
            }
        }
    }
    printf("%s",line);
    return 0;
}
