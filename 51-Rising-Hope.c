#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rising_hope(char *R);

int main(int argc, char *argv[])
{
    char in[1005];

    scanf("%s", in);
    int hope = rising_hope(in);
    printf("%d\n", hope);

    return 0;
}

// Your code goes here
int rising_hope(char *R) {
	int value = 0;
	for(int i =0;i<strlen(R);i++){
		if(R[i]=='P'){
			value++;
		}
		else if(R[i]=='N'){
			value--;
		}
	}
	return value;
}

