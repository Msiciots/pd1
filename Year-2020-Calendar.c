#include <stdio.h>
int month_days[] = {31,29,31,30,31,30,31,31,30,31,30,31};
int start_day = 3;  // 1/1 is Wed
int main(int argc, char *argv[]) {
    int month;
    scanf("%d",&month);
    for (int i = 1 ; i< month;i++){   // count Current start day
        start_day += month_days[i-1]%7;
        start_day %= 7;
    }
    printf("Sun Mon Tue Wed Thu Fri Sat \n");
    int count_blank = start_day;
    while(count_blank--){
        printf("    "); // four blank
    }
    for (int i =0; i<month_days[month-1];i++){
        if((i+start_day)%7==6){  // Sat
            if(i==month_days[month-1]-1)
                printf("%3d ",i+1);
            else
            printf("%3d \n",i+1);
        }
        else{
            printf("%3d ",i+1);
        }
        
    }
        /*int space_day = (month_days[month-1]-(7-start_day))%7;*/
        /*for(int i=0;i<space_day;i++)*/
            /*printf("    ");*/
    return 0;
}
