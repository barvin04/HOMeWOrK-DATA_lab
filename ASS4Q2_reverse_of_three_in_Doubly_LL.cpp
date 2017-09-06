//reverse every three nodes of a doubly linked list 
//(given) ex: 1 2 3 4 5 6 7 8
//-->         3 2 1 6 5 4 7 8

include<iostream>
include<stdlib.h>
using namespace std; 

//Doubly Linked List structure
struct Node{
	int data; 
	Node* next; 
	Node* last;
}*front = NULL, *rear=NULL; //creating two nodes

//check if list is empty .... 	not mandatory ... will do later 

//display 
void display(Node* front){
	Node* current = front; //current pointing of front of list

	while(current!=NULL){
		cout<<current->data<<"\t";
		current = current->next;
	}
	cout<<endl;
}

void insertTail(int data){ //create list or insert data

	Node* new_node  = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->head = NULL;
	new_node->last = NULL;

	//if list is empty
	if(front == NULL) front=new_node;

	else{
		Node* current = front; //a var pointing to head initially 
		while( current->next != NULL;) current = current->next;
	
	//go till end
	current->next = new_node; // insert the new node
	new_node->last = current; //refer back for doubly linked property
	}
	rear = new_node //pointing to new end, after inserting the tail
}

void revThree(){
	Node* current = front; 
	int count = 0; 
	while(current!=NULL){
		if(count%3==0 && current->next!=NULL){//multi of 3 and not last
			if(current->last->last!=NULL){
				current->last->last->next = current->next;
			}
			if(current->next->next!=NULL){
				current->next->next->last = current->last;
			}
			current->last->next = current->next->next;
			current->next->last = current->last->last;
			current->next->next = current;
			current->last->last = current;
			Node* temp = current->last;
			current->last = current->next;
			current->next = temp;
		}
		if(count==1) fornt = current->last;
		count++;
		current = current->next;
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	for(int i=0;i<8;i++)
		insertTail(arr[i]);	
	display(front) ;
	swap3();
	display(front) ;
	return 0;
}