// AlternatingSplit()
//(a,b,c,d,e,f,g)  ==>  (a,c,e,g) and (b,d,f)

#include<iostream>
#include<stdlib.h> //for malloc
using namespace std;

/* functions we need: 1.check_if_list_empty, 2.display, 3.insert_at_end, 4.Alternating_the_split
*/
struct Node{
	int data; 
	Node* next; 
} *head = NULL, *head1=NULL, *head2=NULL;

bool isEmpty(){
	return head==NULL;
}

void display(Node* head){
	Node* current = head; 

	while(current!=NULL){
		cout<<current->data<<"\t";
		current = current->next;
	}
	cout<<"\n";
}

void insertTail(int data){
	Node* new_node = (Node*) malloc(sizeof(Node));
	new_node->data = data; 
	new_node->next = NULL; //putting it at tail 

	if(head==NULL) head=new_node;
	else{
		Node* current = head; 
		while(current->next != NULL){
			current = current->next;
		}
		current->next = new_node;
	}
}

void AlternatingSplit(){
	int count = 0;
	Node* current = head; //current initially pointing to head
	while(current!=NULL){
		Node* new_node = (Node*)malloc(sizeof(Node));
		new_node->data = current->data; 
		new_node->next = NULL;//NOT POINTED BY ANY other NODE FOR NOW !!!!

		//first group
		if(count%2==0){
			if(head1==NULL) head1=new_node; //put the 1st element 
			else{
				Node* current1 = head1; //new current pointing same as the head of this group i.e. head1
				while(current1->next!=NULL) current1 = current1->next; 

				current1->next = new_node; //old last ele now pointing to new node
			}
		}
		else if(count%2==1){//repeat same for this group as last one
			if(head2==NULL) head2==new_node; 
			else{
				Node* current2 = head2; 
				while(current2->next!=NULL) current2 = current2->next;

				current2->next = new_node;
			}
		}
	count++;
	current = current->next;

	}
	display(head1);
	display(head2);
}//AlternateSplitting ends

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	for(int i=0; i<9; i++) insertTail(arr[i]); //LL created and extended to store all elements

	display(head);
	AlternatingSplit();

	return 0;
}