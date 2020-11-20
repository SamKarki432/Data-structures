#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5

struct queuee{
	int info[MAXSIZE];
	int rear,front;
};

void enqueue(struct queuee *);
void dequeue(struct queuee *);
void display_queue(struct queuee *);

void main(){
	struct queuee *q1;	
	int choice,value;
	q1->front=0; q1->rear=0;
	printf("1.enqueue\n2.Dequeue\n3. display queue\n");
	do{
		printf("\nenter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				enqueue(q1); break;
			case 2:
				dequeue(q1);break;
			case 3:
				display_queue(q1); break;
			default:
				printf("\nenter a valid choice.");break;
		}
	}while(1);
}

void enqueue(struct queuee * q1)
{  int value;
	if (q1->front==((q1->rear)+1)% MAXSIZE)
		printf("queue is full.\n");
	else
	{printf("\nenter the value to enqueue:"); scanf("%d",&value); 
		q1->info[q1->rear]= value;
		q1->rear =((q1->rear) + 1)% MAXSIZE;
		}	
	
}

void dequeue(struct queuee *q1)
{ if(q1->front == q1->rear)
		printf("the queue is empty.\n");
	else{
		printf("\n %d \n",q1->info[q1->front]);
		q1->front =(q1->front + 1)% MAXSIZE;
		}
}

void display_queue(struct queuee * q1){
	int i;int f=q1->front , r= q1->rear;
	if(f==r)
		printf("the queue is empty\n");
	else{
		if(f<r)
			{for(i=f ;i<r;i++)
				{printf("%d\n",q1->info[i]);
				}
			}
		else{
			for(i=f;i<MAXSIZE;i++)
			{ printf("%d\n",q1->info[i]);
			}
			for(i=0;i<r;i++)
			{ printf("%d\n",q1->info[i]);
			}
		}
	}
}
