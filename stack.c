#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAXSIZE 10

struct stackk{
	int item[MAXSIZE];
	int top ;
};

void push(struct stackk *);
void pop(struct stackk *);
void display(struct stackk *);
void display_top(struct stackk *);


void main(){
	int choice; struct stackk *s1;char ch;
	s1->top=-1;
	printf("push:1\n pop:2 \n display all items:3 \n display top:4\n exit:5\n\n");
	do{
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			push(s1);break;
		case 2:
			pop(s1);break;
		case 3:
			display(s1);break;
		case 4:
			display_top(s1);break;
		case 5:
			exit(1);
			break;
		default:
			//exit(1);
			printf("enter a valid choice:");
		}
}while(1);
  
}

void push(struct stackk *stk){
	int value;
	printf("enter value to push:","\n");
	scanf("%d",&value);
	if (stk->top<MAXSIZE-1){
		stk->item[++stk->top]=value;
		printf("pushed value is %d\n",stk->item[stk->top]);
		
	}
	else{
	
		printf("stack is full. invalid operation\n.");
	}
}

void pop(struct stackk * stk){
	if (stk->top==-1){
		printf("stack is empty\n");
	}
	else
	{
		printf("popped item is:%d \n", stk->item[stk->top]);
		stk->top= stk->top-1;
	}
}

void display_top(struct stackk *stk){
	printf("top of stack is:%d in index %d\n",stk->item[stk->top],stk->top);
}

void display(struct stackk *stk){
	int i,a;
	if (stk->top==-1)
		printf("stack is empty.nothing to display\n");
	a=stk->top;
	for(i=a;i>=0;i--){
		printf("%d\t\n",stk->item[i]);
	}
	
}
