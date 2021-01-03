#include <stdio.h>
#include <stdbool.h>
struct card{
    char *c;
};
int cmp (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
bool check_straight_flush(struct card T[]){
    int tmp[5];
    // check straight
    for(int i=0;i<5;i++){
        if('2'<=T[i].c[0] &&T[i].c[0]<='9'){
            tmp[i] = T[i].c[0]-'0';
        } 
        else{
            if(T[i].c[0]=='t')
                tmp[i] = 10;
            else if(T[i].c[0]=='j')
                tmp[i] = 11;
            else if(T[i].c[0]=='q')
                tmp[i] = 12;
            else if(T[i].c[0]=='k')
                tmp[i] = 13;
            else if(T[i].c[0]=='a')
                tmp[i] = 14;
        }
    }
    qsort(tmp, 5, sizeof(int), cmp);
    bool isStraight=true;
    for(int i=0;i<4;i++){
        if(tmp[i]+1 != tmp[i+1])
            isStraight=false;
    }
    bool isFlush = true;
    for(int i=0;i<4;i++){
        if(T[i].c[1]!=T[i+1].c[1])
            isFlush = false;
    }
    return isStraight && isFlush;
}
bool check_four(struct card T[]){
    int tmp[5];
    for(int i=0;i<5;i++){
        if('2'<=T[i].c[0] &&T[i].c[0]<='9'){
            tmp[i] = T[i].c[0]-'0';
        } 
        else{
            if(T[i].c[0]=='t')
                tmp[i] = 10;
            else if(T[i].c[0]=='j')
                tmp[i] = 11;
            else if(T[i].c[0]=='q')
                tmp[i] = 12;
            else if(T[i].c[0]=='k')
                tmp[i] = 13;
            else if(T[i].c[0]=='a')
                tmp[i] = 14;
        }
    }

    int record_card[15];
    for(int i=0;i<15;i++)
        record_card[i]=0;
    for(int i=0;i<5;i++){
        record_card[tmp[i]]++;
    }
    bool isFour = false;
    for(int i=0;i<15;i++)
        if(record_card[i]==4)
            isFour = true;
    return isFour;
}
bool check_Fullhouse(struct card T[]){
    int tmp[5];
    for(int i=0;i<5;i++){
        if('2'<=T[i].c[0] &&T[i].c[0]<='9'){
            tmp[i] = T[i].c[0]-'0';
        } 
        else{
            if(T[i].c[0]=='t')
                tmp[i] = 10;
            else if(T[i].c[0]=='j')
                tmp[i] = 11;
            else if(T[i].c[0]=='q')
                tmp[i] = 12;
            else if(T[i].c[0]=='k')
                tmp[i] = 13;
            else if(T[i].c[0]=='a')
                tmp[i] = 14;
        }
    }
    int record_card[15];
    for(int i=0;i<15;i++)
        record_card[i]=0;
    for(int i=0;i<5;i++){
        record_card[tmp[i]]++;
    }
    bool isTree = false;
    bool isTwo = false;
    for(int i=0;i<15;i++){
        if(record_card[i]==3)
            isTree = true;
        if(record_card[i]==2)
            isTwo = true;
    }
    return isTree && isTwo;
}
bool check_Flush(struct card T[]){
    bool isFlush = true;
    for(int i=0;i<4;i++){
        if(T[i].c[1]!=T[i+1].c[1])
            isFlush = false;
    }
    return isFlush;
}
bool check_Straight(struct card T[]){
    int tmp[5];
    // check straight
    for(int i=0;i<5;i++){
        if('2'<=T[i].c[0] &&T[i].c[0]<='9'){
            tmp[i] = T[i].c[0]-'0';
        } 
        else{
            if(T[i].c[0]=='t')
                tmp[i] = 10;
            else if(T[i].c[0]=='j')
                tmp[i] = 11;
            else if(T[i].c[0]=='q')
                tmp[i] = 12;
            else if(T[i].c[0]=='k')
                tmp[i] = 13;
            else if(T[i].c[0]=='a')
                tmp[i] = 14;
        }
    }
    qsort(tmp, 5, sizeof(int), cmp);
    bool isStraight=true;
    for(int i=0;i<4;i++){
        if(tmp[i]+1 != tmp[i+1])
            isStraight=false;
    }
    return isStraight;

}
bool check_Three(struct card T[]){
    int tmp[5];
    for(int i=0;i<5;i++){
        if('2'<=T[i].c[0] &&T[i].c[0]<='9'){
            tmp[i] = T[i].c[0]-'0';
        } 
        else{
            if(T[i].c[0]=='t')
                tmp[i] = 10;
            else if(T[i].c[0]=='j')
                tmp[i] = 11;
            else if(T[i].c[0]=='q')
                tmp[i] = 12;
            else if(T[i].c[0]=='k')
                tmp[i] = 13;
            else if(T[i].c[0]=='a')
                tmp[i] = 14;
        }
    }
    int record_card[15];
    for(int i=0;i<15;i++)
        record_card[i]=0;
    for(int i=0;i<5;i++){
        record_card[tmp[i]]++;
    }
    bool isTree = false;

    for(int i=0;i<15;i++)
        if(record_card[i]==3)
            isTree = true;
    return isTree;
}
bool check_Twopair(struct card T[]){
    int tmp[5];
    for(int i=0;i<5;i++){
        if('2'<=T[i].c[0] &&T[i].c[0]<='9'){
            tmp[i] = T[i].c[0]-'0';
        } 
        else{
            if(T[i].c[0]=='t')
                tmp[i] = 10;
            else if(T[i].c[0]=='j')
                tmp[i] = 11;
            else if(T[i].c[0]=='q')
                tmp[i] = 12;
            else if(T[i].c[0]=='k')
                tmp[i] = 13;
            else if(T[i].c[0]=='a')
                tmp[i] = 14;
        }
    }
    int record_card[15];
    for(int i=0;i<15;i++)
        record_card[i]=0;
    for(int i=0;i<5;i++){
        record_card[tmp[i]]++;
    }
    int count_two=0;
    for(int i=0;i<15;i++)
        if(record_card[i]==2)
            count_two++;
    if(count_two==2)
        return true;
    else
        return false;

}
bool check_Pair(struct card T[]){
    int tmp[5];
    for(int i=0;i<5;i++){
        if('2'<=T[i].c[0] &&T[i].c[0]<='9'){
            tmp[i] = T[i].c[0]-'0';
        } 
        else{
            if(T[i].c[0]=='t')
                tmp[i] = 10;
            else if(T[i].c[0]=='j')
                tmp[i] = 11;
            else if(T[i].c[0]=='q')
                tmp[i] = 12;
            else if(T[i].c[0]=='k')
                tmp[i] = 13;
            else if(T[i].c[0]=='a')
                tmp[i] = 14;
        }
    }
    int record_card[15];
    for(int i=0;i<15;i++)
        record_card[i]=0;
    for(int i=0;i<5;i++){
        record_card[tmp[i]]++;
    }
    bool isTwo = false;
    for(int i=0;i<15;i++)
        if(record_card[i]==2)
            isTwo = true;
    return isTwo;

}
int main(void){
    struct card A[5];
    struct card B[5];
    struct card C[5];
    struct card D[5];
    for(int i=0;i<5;i++){
        A[i].c = malloc(sizeof(char)*2);
        scanf("%s",A[i].c);
    }
    for(int i=0;i<5;i++){
        B[i].c = malloc(sizeof(char)*2);
        scanf("%s",B[i].c);
    }
    for(int i=0;i<5;i++){
        C[i].c = malloc(sizeof(char)*2);
        scanf("%s",C[i].c);
    }
    for(int i=0;i<5;i++){
        D[i].c = malloc(sizeof(char)*2);
        scanf("%s",D[i].c);
    }
    int levelA,levelB,levelC,levelD;
    if(check_straight_flush(A))
        levelA=0;
    else if(check_four(A))
        levelA=1;
    else if(check_Fullhouse(A))
        levelA=2;
    else if(check_Flush(A))
        levelA=3;
    else if(check_Straight(A))
        levelA=4;
    else if(check_Three(A))
        levelA=5;
    else if(check_Twopair(A))
        levelA=6;
    else if(check_Pair(A))
        levelA=7;
    else 
        levelA=8;
    
    if(check_straight_flush(B))
        levelB=0;
    else if(check_four(B))
        levelB=1;
    else if(check_Fullhouse(B))
        levelB=2;
    else if(check_Flush(B))
        levelB=3;
    else if(check_Straight(B)) 
        levelB=4;
    else if(check_Three(B))
        levelB=5;
    else if(check_Twopair(B))
        levelB=6;
    else if(check_Pair(B))
        levelB=7;
    else 
        levelB=8;

    if(check_straight_flush(C))
        levelC=0;
    else if(check_four(C))
        levelC=1;
    else if(check_Fullhouse(C))
        levelC=2;
    else if(check_Flush(C))
        levelC=3;
    else if(check_Straight(C))
        levelC=4;
    else if(check_Three(C))
        levelC=5;
    else if(check_Twopair(C))
        levelC=6;
    else if(check_Pair(C))
        levelC=7;
    else 
        levelC=8;
    
    if(check_straight_flush(D))
        levelD=0;
    else if(check_four(D))
        levelD=1;
    else if(check_Fullhouse(D))
        levelD=2;
    else if(check_Flush(D))
        levelD=3;
    else if(check_Straight(D))
        levelD=4;
    else if(check_Three(D))
        levelD=5;
    else if(check_Twopair(D))
        levelD=6;
    else if(check_Pair(D))
        levelD=7;
    else 
        levelD=8;

    int s=0;
    while(s!=9){
        if(s==levelA){
            printf("A ");
        }
        if(s==levelB){
            printf("B ");
        }
        if(s==levelC){
            printf("C ");
        }
        if(s==levelD){
            printf("D ");
        }
        s++;
    }

    return 0;
}