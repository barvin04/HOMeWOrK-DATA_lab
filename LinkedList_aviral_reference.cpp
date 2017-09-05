#include <iostream>
#include <stdlib.h>  // for malloc
 
using namespace std;
 
struct Node{   //duuno about data security
	int data;
	Node* next;
} *head=NULL ;
 
 
bool islistempty(){
	return head == NULL ;
}
 
void display(){
	Node* current = head;
 
	while(current!= NULL){
		cout<<current->data<<" " ;
		current = current ->next ;
	}
	cout<<endl;
}
 
void insertAtBeginning(int data){
	Node* new_node = (Node*) malloc(sizeof(Node));
	new_node -> data =data;
	new_node -> next = head;
	head = new_node;
}
 
void insertTail(int data){
 
 	Node* new_node = (Node*) malloc(sizeof(Node));
	new_node -> data =data ;
	new_node -> next = NULL;
 
	if( head == NULL) //list is empty
		head = new_node;
	else{	
	Node* current = head;
	while(current -> next != NULL){
		current = current ->next;
	}
 
	current -> next = new_node ;	
	}
}
 
void insertAfterThis(int desireddata,int data){
	Node* new_node = (Node*) malloc(sizeof(Node));
	new_node -> data = data;
	Node* current = head;
	while(current != NULL && current-> data != desireddata){
		current = current -> next;
	}
	new_node -> next = current ->next;
	current -> next = new_node;
}
 
void delete_from_beginning(){
	if(!islistempty()){
		Node* first = head;
		head =  head ->next;
		delete first;
	}
}
 
void delete_from_end(){
	if(!islistempty()){
		Node* current = head;
		while((current -> next)-> next != NULL){
			current = current -> next;
		}
		Node* last = current -> next;
		current -> next = NULL;
		delete last;
 
	}
}
 
void delete_with_value(int desired){
	Node* current = head;
	while(current != NULL && (current->next)->data != desired){
		current = current -> next;
	}
 
	Node* tobedeleted = current -> next;
	current -> next = tobedeleted -> next;
	delete tobedeleted;
}
 
int length(){
	int length=0;
	Node * current = head;
	while(current != NULL){
		current = current -> next;
		length++;
	}
	return length;
}
 
bool search(int key){
	Node* current = head;
	while(current->next != NULL && current -> data != key) {
		current = current -> next;
	}
 
	return current->data == key ;
 
}
 
// --------------------------- AWEOSOME FUNCTIONS START HERE ------------------------------------//
 
void ReversePrint(Node *link)
{ 	//classic use of internal stack here -- how recursive functions are implemented...
    Node* current = link ;
    if(link == NULL)
        return ;
    ReversePrint(link->next);
 
    cout<<link->data<<endl ;
}
 
int middle(){
Node* first=head,*second = head;
while(first !=NULL && first -> next!= NULL){
		first = first -> next -> next;
		second = second -> next;
	}
 
 
	return second->data;
}
 
int nthfromlast(int n){
	Node* first =head, *second =head;
	int count=0;
	while(count !=n && first !=NULL){
		count++;
		first = first ->next;
	}
	while(first !=NULL){
	first= first ->next ;
	second = second ->next;
	}
	return second->data;
}	
 
void reverse(){
	Node* prev=NULL,*current= head,*nextt ;
	while(current != NULL){
		nextt =  current ->next;
		current->next = prev;
		prev = current;
		current = nextt;
	}
 
	head = prev;
 
}
 
// FLOYD'S CYCLE ALGORITHM!!  ---         IMP MUST REVISE!
bool isthereanyloop(){
	Node* first =head, *second =head;
	while(first != NULL && first -> next != NULL){
		first = first -> next ->next ;
		second = second -> next;
		if( first == second)
			return true;
	}
 
	return false;
}
 
 
 
 
 
// ---------------------------------------- END OF AWESOME FUNCTIONS -----------------------------------//
 
 
int main(){
	int arr[] = {1,4,6,3,9,5,8,2,98};
	for(int i=0;i<9;i++)
		insertTail(arr[i]);
	display();
	insertAfterThis(5,95);	
	display();
	delete_from_beginning();
	display();
	delete_from_end();
	display();
	delete_with_value(95);
	display();
 
	cout<<length()<<endl;
	cout<<search(5)<<endl;
	cout<<search(223)<<endl;
 
	return 0;
}
