#include <stdio.h>
#include <stdbool.h>
#define n 5

bool visit(char(*)[n], int(*)[n], int, int);
int main(void) {
    char maze[n][n];
    int route[n][n];
    // initialize maze and route matrices
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
	    route[i][j]=0;
	    scanf("%c", &maze[i][j]);
	    getchar();
	}
    }
    if (visit(maze, route, 0, 0)) { // (0,0) is a starting point
        for (int i=0; i<n; i++) {
	    for (int j=0; j<n; j++)
	        printf("%d ", route[i][j]);
	    printf("\n");
        }
    } else {
	printf("Can't find the exit!");
    }
    return 0;
}
// Your code goes here
// TODO: fill the route matrix with 0's or 1‘s.
// If there isn't any route, return false; otherwise, return true.
bool visit(char maze[][n], int route[][n], int originX, int originY) {
	route[originX][originY] = 1;
	if((originX==4) && (originY==4))
		return true;
	bool success = false;
	
	
	if(originX<4){
		if(maze[originX+1][originY]=='r' && (route[originX+1][originY]==0)){
			success = visit(maze,route,originX+1,originY);
			if(!success)
				route[originX+1][originY] = 0;
			else
				return success;
		}
	}
	if(originX>0){
		if(maze[originX-1][originY]=='r'&& (route[originX-1][originY]==0)){
			success = visit(maze,route,originX-1,originY);
			if(!success)
				route[originX-1][originY] = 0;
			else
				return success;
		}
	}
	if(originY<4){
		if(maze[originX][originY+1]=='r'&& (route[originX][originY+1]==0)){
			success = visit(maze,route,originX,originY+1);
			if(!success)
				route[originX][originY+1] = 0;
			else 
				return success;
		}
	}
	if(originY>0){
		if(maze[originX][originY-1]=='r'&& (route[originX][originY-1]==0)){
			success = visit(maze,route,originX,originY-1);
			if(!success)
				route[originX][originY-1] = 0;
			else 
				return success;
		}
	}
	return false;
}
