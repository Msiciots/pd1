#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;
};
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
    struct node *head,*tail;
	for(int i=1;i<=n;i++){
		struct node *new=malloc(sizeof(struct node));
		new->value = i;
		if(i==1){
			head = new;
			tail = new;
		}
		else{
			tail->next = new;
			tail = tail->next;
		}
	}
	while(m--){
		printf("%d ",head->value);
		tail->next = head->next;
		tail = tail->next;
		head = head->next->next;
	}
	return 0;
}