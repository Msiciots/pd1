#include<stdio.h>
#include<string.h>

void add(char a[], char b[], char res[]);

int main(){
    char a[100], b[100], res[105];
    scanf("%s %s", a, b);
    add(a, b, res);
    printf("%s", res);
    return 0;
}

// Your code goes here
char* reverseString(char* s) {
    int len=strlen(s);
    int i;
    char tem;
    for(i=0;i<=len/2-1;i++)
    {
        tem=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=tem;
    }
    return s;
}
void add(char a[], char b[], char res[]){
    a=reverseString(a);
    b=reverseString(b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len = len_a > len_b ? len_a : len_b;
    int carry = 0;
    for(int i=0;i<len;i++){
        int tmp;
        if(i>=len_b)
            tmp = a[i]-'0'+carry;
        else if (i>= len_a)
            tmp = b[i]-'0'+carry;
        else
            tmp = a[i]-'0'+b[i]-'0'+carry;
        if(tmp>9){
            tmp = tmp - 10;
            carry = 1;
        }
        else
            carry = 0;
        res[i] = tmp +'0';
    }
    if(carry==1)
        res[len] = '1';
    res = reverseString(res);
}