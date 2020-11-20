#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAXSIZE 100

struct queuee{
	int info[MAXSIZE];
	int rear,front;
};

void enqueue(struct queuee * , int);
void dequeue(struct queuee *);
void display_queue(struct queuee *);
void display_front(struct queuee *);
void make_empty(struct queuee *);

void main(){
	struct queuee *q1;	
	int choice,value;
	q1->front=0; q1->rear=-1;
	//printf("1.enqueue\n2.Dequeue\n3. display queue\n 4.display front\n 5. make empty\n");
	do{
		printf("\n\t\t1.enqueue\n\t\t2.Dequeue\n\t\t3. display queue\n\t\t4.display front\n\t\t5. make empty\n\t\t 6.exit");
		printf("\nenter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("\nenter the value to enqueue:"); scanf("%d",&value);
				enqueue(q1, value); break;
			case 2:
				dequeue(q1);break;
			case 3:
				display_queue(q1); break;
			case 4:
					display_front(q1);break;
			case 5:
					make_empty(q1);break;
			case 6:
				exit(1);
				break;	
			default:
				printf("\nenter a valid choice.");break;
		}
	}while(1);
}

void enqueue(struct queuee * q1, int value)
{ if(q1->rear<MAXSIZE-1)
	{ q1->info[++q1->rear]= value;
	}
	else
		printf("the queue is full. cannat enter any new values.\n");
}

void dequeue(struct queuee *q1)
{ if(q1->front> q1->rear)
		printf("the queue is empty.\n");
	else{
		
		printf("\t value dequeued: %d \n",q1->info[q1->front]);
		q1->front= q1->front+1;
	}
}

void display_queue(struct queuee * q1){
	int i, a=q1->front;
	for(i=a;i<=q1->rear ; i++)
	{ printf("\n %d \n",q1->info[i]);
	}
}

void display_front(struct queuee *q1)
{	printf("\nfront-value:%d\n",q1->info[q1->front]);
}

void make_empty(struct queuee *q1)
{	q1->front=0;
	q1->rear=-1;
}
