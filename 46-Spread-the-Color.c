#include <stdio.h>
#define M 5
#define N 8
char colors[4] = {'R', 'G', 'B', 'X'};   // Red, Green, Blue, Empty

void spread(char*, int, int);

int main(void) {
    char graph[M][N];
    int row, col;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            scanf("%c", &graph[i][j]);
        getchar();      // Ignore '\n'
    }
    scanf("%d %d", &row, &col);    // Starting position
    
    spread(&graph[0][0], row, col);
    
    // Print out the spreading result
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            printf("%c", graph[i][j]);
        printf("\n");
    }
    return 0;
}
// Your code goes here
void spread(char* graph, int row, int col) {
	
	// go left
	for(int j = col-1;j>=0;j--)
		if(!(*(graph+row*N+j)=='X') && !(*(graph+row*N+j)==*(graph+row*N+col)))
            break;
        else
			*(graph+row*N+j) = *(graph+row*N+col);
	// go right
	for(int j = col+1;j<8;j++)
		if(!(*(graph+row*N+j)=='X') && !(*(graph+row*N+j)==*(graph+row*N+col)))
            break;
        else
    		*(graph+row*N+j) = *(graph+row*N+col);
	// go up
	for(int i = row-1;i>=0;i--)
		if(!(*(graph+i*N+col)=='X') && !(*(graph+i*N+col)==*(graph+row*N+col)))
			break;
        else
            *(graph+i*N+col) = *(graph+row*N+col);
	// go down
	for(int i = row+1;i<5;i++)
		if(!(*(graph+i*N+col)=='X') && !(*(graph+i*N+col)==*(graph+row*N+col)))
			break;
        else
            *(graph+i*N+col) = *(graph+row*N+col);

}
