/* C program for insertion sort on a linked list */
#include<iostream> 
#include<stdlib.h> 
using namespace std;
  
/* Link list node */
struct Node 
{ 
    int data; 
    struct Node* next; 
};  
void sortedInsert(struct Node*, struct Node);					// Function to insert a given node in a sorted linked list  
void insertionSort(struct Node **head_ref){ 						// function to sort a singly linked list using insertion sort  
    struct Node *sorted = NULL;   								// Initialize sorted linked list 
    struct Node *current = *head_ref; 							// Traverse the given linked list and insert every node to sorted
    while (current != NULL) 
    { 
        struct Node *next = current->next; 						// Store next for next iteration   
        sortedInsert(&sorted, current);  						// insert current in sorted linked list  
        current = next; 										 // Update current
    } 
    *head_ref = sorted;										// Update head_ref to point to sorted linked list  
} 
/* function to insert a new_node in a list. Note that this 
  function expects a pointer to head_ref as this can modify the 
  head of the input linked list (similar to push())*/
void sortedInsert(struct Node** head_ref, struct Node* new_node) 
{ 
    struct Node* current; 												/* Special case for the head end */
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data) 
    { 
        new_node->next = *head_ref; 
        *head_ref = new_node; 
    } 
    else{																/* Locate the node before the point of insertion */ 	
        current = *head_ref; 
        while (current->next!=NULL && 
               current->next->data < new_node->data) 
        { 
            current = current->next; 
        } 
        new_node->next = current->next; 
        current->next = new_node; 
    } 
} 
void printList(struct Node *head) {
    struct Node *temp = head; 
    while(temp != NULL) 
    { 
        printf("%d  ", temp->data); 
        temp = temp->next; 
    } 
} 
void push(struct Node** head_ref, int new_data) {		   /* allocate node */
    struct Node* new_node = new Node; 					    /* put in the data  */
    new_node->data  = new_data; 						    /* link the old list off the new node */
    new_node->next = (*head_ref); 					    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 
int main() {
    struct Node *a = NULL; 
    push(&a, 5); 
    push(&a, 20); 
    push(&a, 4); 
    push(&a, 3); 
    push(&a, 30); 
    cout<<"Linked List before sorting \n"; 
    printList(a); 										//insertionSort(&a); 
    cout<<"\nLinked List after sorting \n"; 
    printList(a); 
    return 0; 
}
