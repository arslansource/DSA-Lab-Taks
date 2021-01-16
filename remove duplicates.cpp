#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node *newNode(int data)							// Utility function to create a new Node
{
Node *temp = new Node;
temp->data = data;
temp->next = NULL;
return temp;
}
void removeDuplicates(struct Node *start)				/* Function to remove duplicates from a unsorted linked list */
{
	struct Node *ptr1, *ptr2, *dup;
	ptr1 = start;
	while (ptr1 != NULL && ptr1->next != NULL)			/* Pick elements one by one */
	{
		ptr2 = ptr1;
		while (ptr2->next != NULL)						/* Compare the picked element with rest of the elements */
		{												/* If duplicate then delete it */
			if (ptr1->data == ptr2->next->data)
			{											/* sequence of steps is important here */
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete(dup);
			}
			else 														/* This is tricky */
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}
void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}
int main(){													/* The constructed linked list is: 10->12->11->11->12->11->10*/
	struct Node *start = newNode(10);
	start->next = newNode(12);
	start->next->next = newNode(11);
	start->next->next->next = newNode(11);
	start->next->next->next->next = newNode(12);
	start->next->next->next->next->next =
									newNode(11);
	start->next->next->next->next->next->next =
									newNode(10);
	printf("Linked list before removing duplicates ");
	printList(start);
	removeDuplicates(start);
	printf("\nLinked list after removing duplicates ");
	printList(start);
	return 0;
}
