#include <stdio.h>
unsigned long combination(int n, int m){
    if(m==0 || m==n)
        return 1;
    else{
        return combination(n-1,m-1)+combination(n-1,m);
    }

}
int main(int argc, char *argv[]) {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%ld",combination(n,m));

    return 0;
}
