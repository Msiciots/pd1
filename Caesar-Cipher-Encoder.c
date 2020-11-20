#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int shift;
    scanf("%d\n",&shift);
    shift %= 26;
    char line[1000000];
     scanf("%[^\n]", line);
    /*gets(line);*/
    for(int i =0;i<strlen(line);i++){
        if('A'<=line[i] && line[i]<='Z'){
            line[i] += shift;
            if(line[i]>'Z')
                line[i] -= 26;
            else if(line[i]<'A')
                line[i] += 26;
        }
        else if ('a'<=line[i] && line[i]<='z'){
            line[i] += shift;
            if(line[i]>'z')
                line[i] -= 26;
            else if(line[i]<'a')
                line[i] += 26;
        }
    }
    printf("%s",line);
    return 0;
}
