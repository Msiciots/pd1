#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    char input[100000];
    char output[100000];
    scanf ("%[^\n]%*c", input);
    int flag = 0;
    int j=0;
    for(int i=0;i<strlen(input);i++){
        if(!(input[i]==' '&&input[i+1]==' '))
            output[j++]=input[i];
    }
    printf("%s",output);
    return 0;
}
