//reference : geeksforgeeks.org/reverse-a-linked-list/
//Given pointer to the head node of a linked list, task is to reverse the linked list. We need to reverse the list by changing links between nodes. 

//Recursive Method:
//1)Divide the list into two parts: first node and the rest of the LList
//call reverse for the rest of the linked list 
//3)link rest to the first
//4)Fix head pointer to the reverse head 


// A simple and tail recursive C++ program to reverse
// a linked list
#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
    int data;
    struct Node *next;
};
 
void reverseUtil(Node *curr, Node *prev, Node **head);
 
// This function mainly calls reverseUtil()
// with prev as NULL
void reverse(Node **head)
{
    if (!head)
        return;
    reverseUtil(*head, NULL, head);
}
 
// A simple and tail recursive function to reverse
// a linked list.  prev is passed as NULL initially.
void reverseUtil(Node *curr, Node *prev, Node **head)
{
    /* If last node mark it head*/
    if (!curr->next)
    {
        *head = curr;
 
        /* Update next to prev node */
        curr->next = prev;
        return;
    }
 
    /* Save curr->next node for recursive call */
    node *next = curr->next;
 
    /* and update next ..*/
    curr->next = prev;
 
    reverseUtil(next, curr, head);
}




//not important : 
// A utility function to create a new node
Node *newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
 
// A utility function to print a linked list
void printlist(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}



//int main !!!!
