#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node* head = NULL;
void insert(int value){
	struct Node* new_node;
	new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = value;
	new_node -> next = head;
	head = new_node;
}
void removeduplicates()				/* Function to remove duplicates from a unsorted linked list */
{
	struct Node *ptr1 = head;
	struct Node* ptr2 = NULL;
	struct Node* dup = NULL;
	while (ptr1 != NULL)			/* Pick elements one by one */
	{
		ptr2 = ptr1;
		while (ptr2->next != NULL && ptr1->next != NULL)						/* Compare the picked element with rest of the elements */
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
void display(){
	struct Node* temp;
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<"	";
		temp = temp->next;
	}
	cout<<endl;
}
int main(){
	int value,ch;													/* The constructed linked list is: 10->12->11->11->12->11->10*/
	cout<<"1 to insert"<<endl;
	cout<<"2 to display"<<endl;
	cout<<"3 to remove duplicates"<<endl;
	cout<<"4 to exit"<<endl;
	do{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter value"<<endl;
				cin>>value;
				insert(value);
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				removeduplicates();	
				break;
			}
			case 4:{
				cout<<"Exitting"<<endl;
				break;
			}
			default:{
				cout<<"Invalid input, Try again"<<endl;
				break;
			}
		}
	}while(ch != 4);
	return 0;
}
