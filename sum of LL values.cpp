#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
Node* newNode(int data)
{
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}
void push(Node** head_ref, int new_data)								/* Function to insert a node at the beginning of the Singly Linked List */
{																	/* allocate node */
	Node* new_node = newNode(new_data);							/* link the old list off the new node */
	new_node->next = (*head_ref);								/* move the head to point to the new node */
	(*head_ref) = new_node;
}															/* Adds contents of two linked lists and  return the head node of resultant list */
Node* addTwoLists(Node* first, Node* second)
{
	Node* res = NULL;												// res is head node of the resultant list
	Node *temp, *prev = NULL;
	int carry = 0, sum;											// while both lists exist
	while (first != NULL
		|| second != NULL) {								/* Calculate value of next digit in resultant list.The next digit is sum of following things (i) Carry(ii) Next digit of firstlist (if there is a next digit)(ii) Next digit of secondlist (if there is a next digit) */
		sum = carry + (first ? first->data : 0)
			+ (second ? second->data : 0);					// update carry for next calulation
		carry = (sum >= 10) ? 1 : 0;					// update sum if it is greater than 10
		sum = sum % 10;									// Create a new node with sum as data
		temp = newNode(sum);							// if this is the first node then
		if (res == NULL)								// set it as head of the resultant list
			res = temp;									// If this is not the first
		else											// node then connect it to the rest.
			prev->next = 								// Set prev for next insertion
		prev = temp;		
		if (first)										// Move first and second
			first = first->next;						// pointers to next nodes
		if (second)
			second = second->next;
	}
	if (carry > 0)
		temp->next = newNode(carry);
	return res;												// return head of the resultant list
}
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
	cout << endl;
}
int main(void)
{
	Node* res = NULL;
	Node* first = NULL;
	Node* second = NULL;
	push(&first, 6);											// create first list 7->5->9->4->6
	push(&first, 4);
	push(&first, 9);
	push(&first, 5);
	push(&first, 7);
	printf("First List is ");
	printList(first);
	push(&second, 4);											// create second list 8->4
	push(&second, 8);
	cout << "Second List is ";
	printList(second);
	res = addTwoLists(first, second);							// Add the two lists and see result
	cout << "Resultant list is ";
	printList(res);

	return 0;
}


