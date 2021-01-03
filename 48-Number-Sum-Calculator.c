#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int addition(char str[]);

int main() {
    char str[N];
    scanf("%s", str);
    int sum = addition(str);
    printf("%d", sum);
    return 0;
}
int addition(char str[]){
	char *num_str;
	num_str = strtok(str,"+");
	int sum = 0;
	while(num_str){
	sum += atoi(num_str);
	num_str = strtok(NULL,"+");
	}
	return sum;
}
