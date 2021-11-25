#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int size =10;
int head=-1,end = -1;

//This function creates space in memory for storing items in our queue array
int *create(void){
int *queue = (int *)malloc(size*sizeof(int));
return queue;
}

//This function checks if the queue is empty
bool isEmpty(void){
	if(head == -1)return true;
	else return false;
}

//This function checks if the queue is full
bool isFull(void){
	if(head ==0 && end == size-1 || head == end+1)return true;
	return false;
}

//This function adds item into the end queue
void enqueue(int item,int *queue){
	if(!isFull()){
		if(head == -1) head =0;
		end = (end +1) % size;
		queue[end] = item; 
		printf("%d had been added to the queue\n",item);
	}else{
		printf("The queue is full\n");
		return;
	}
}

//This function removes an element form the head of the queue
int dequeue(int *queue){
int val;
	if(isEmpty()){
		return -2;
	}else{
		val = queue[head];
		if(head == end){
			head =-1;
			end= -1;
		}else{
		head = (head+1)%5;
		}
		return val;
}
}

// This funtion iss used to dispaly the queue to the useer
void display(int *queue){
	if(isEmpty()){
		printf("Cannot display an empty queue");
	}else{
		printf("\nThe queue contains\n");
	for(int i=head; i!=end +1; i=(i+1)%5){
			printf("|%4d |",queue[i]);
		}
		printf("\n");
		}
	}
//This funtion returns the size of the queue
int sizeOfQueue(int *queue){

	return (end-head +1);
}
//This function returns the item at the head of the queue
int headOfQueue(int *queue){
	return queue[head];
}

//This function returns the item at the end of the queue
int endOfQueue(int *queue){
	return queue[end];
}


int main(void){
//initializes the queue
int *queue=create();

	enqueue(10,queue);
	enqueue(11,queue);
	enqueue(12,queue);
	enqueue(14,queue);

	display(queue);

	dequeue(queue);

	dequeue(queue);

	display(queue);


 
return 0;
}
