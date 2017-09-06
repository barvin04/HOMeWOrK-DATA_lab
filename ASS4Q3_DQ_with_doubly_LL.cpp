//implementing Deque with doubly LL or circular queue

#include<iostream>
#include<stdlib.h>
using namespace std; 

//create structure for doubly LL
struct Node{
	int data; 
	Node* next;
}*front=NULL, *rear=NULL;

//check if list is empty... not mandatory 

void display(Node* front){
	Node* current = front; 

	while(current!=NULL){	
		cout<<current->data<<"\t";
		current = current->next; 
	}
	cout<<"\n";
}

void enqueEnd(int data){

	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data  = data; 
	new_node->next = NULL; 
	if(rear!=NULL) rear->next = new_node;
	new_node->last = rear; 

	if (front== NULL) front==new_node;
	rear= new_node;
}

void enqueFront(int data){
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data=data; 
	new_node->next = front; 
	new_node->last=NULL;

	if(front==NULL) front = new_node;
	if(rear==NULL) rear = new_node;

	front = new_node;
}

int deqEnd(){
	if(rear!=NULL){
		int data = rear->data;
		rear = rear->last; 
		return data; 
	}
	return -1;
}

int deqFront(){
	if(front!=NULL){
		int data = front->data;
		front = front->next;
		return data;
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	enqueEnd(arr[0]);
	enqueFront(arr[1]);
	enqueEnd(arr[2]);
	enqueFront(arr[3]);
	enqueEnd(arr[4]);
	enqueFront(arr[5]);
	enqueEnd(arr[6]);
	enqueFront(arr[7]);
	display(front) ;
	cout<<"Dequed element from front is "<<deqFront()<<endl;
	display(front) ;
	cout<<"Dequed element from end is "<<deqEnd()<<endl;
	display(front) ;
	cout<<"Dequed element from front is "<<deqFront()<<endl;
	display(front) ;
	cout<<"Dequed element from front is "<<deqFront()<<endl;
	display(front) ;
	cout<<"Dequed element from front is "<<deqFront()<<endl;
	display(front) ;
	cout<<"Dequed element from end is "<<deqEnd()<<endl;
	display(front) ;
	return 0;
}