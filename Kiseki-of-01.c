#include <stdio.h>

int main(int argc, char *argv[]) {
    int inA[32],inB[32],out[32];

    for(int i=0;i<32;i++){
        scanf("%d",&inA[i]);
    }
    for(int i=0;i<32;i++){
        scanf("%d",&inB[i]);
    }
    int C=0;
    for(int i=31;i>=0;i--){
        out[i] = inA[i]^inB[i]^C;
        C = (inA[i]&inB[i])|(inB[i]&C)|(inA[i]&C); 
    }
    
    for(int i =0;i<32;i++)
        printf("%d ",out[i]);
    
    return 0;
}
