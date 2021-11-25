#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int top = -1;
int size = 10;

//This function allocates memory for the stack
int *create(void){
	int *stack=(int *)malloc(size*sizeof(int));
return stack;
}

//This function checks if the stack is empty
bool isEmpty(void){
	if(top ==-1)return true;
	return false;
}

//This function checks if the stack is full
bool isFull(void){
	if(top>size)return true;
	return false;
}

//This function adds an item to the TOP of the stack
void push(int *stack, int item){

if( ! isFull()){
		top ++;
		stack[top]= item;
		printf("%d was pushed into the stack\n",item);
	}else {
		printf("Stack is Full! (consider popping before pushing again)\n");
		return;
	}

}

//This function removes an item from the top of the stack
int pop(int *stack){
	int popped;
	if(isEmpty()){
		printf("The stack is Empty\n");
		return -2;
	}else{
		popped = stack[top--];
		printf("\n%d was popped from the stack\n", popped);
		return popped;
}
}

//This function display the stack to the user
void display(int *stack){
	if(isEmpty()){
		printf("\nThe Stack is Empty\n");
		}else{
	printf("\nThis is the Stack\n");
	for(int i=0; i<=top; i++){
		printf("%5d |",stack[i]);
	}
	printf("\n");
	}
}
//This function prints out the size of the stack;
void sizeOfStack(int *stack){
	printf("\nThe size of the stack is %d\n", top+1);
}

//This function returns the element at the TOP of stack without removing it
int topOfStack(int *stack){
return stack[top];
}




int main(void){
	int *stack = create();
	int c;
	push(stack,5);

	push(stack,10);

	push(stack,8);

	push(stack,9);

	display(stack);

	sizeOfStack(stack);

	c = pop(stack);

	display(stack);


	return 0;
}
