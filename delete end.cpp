#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void del_end(){
	if(head == NULL){
		cout<<"No node to delete"<<endl;
	}
	else{
		struct Node* temp;
		struct Node* secondlast;
		temp = head;
		while(temp -> next != NULL){
			secondlast = temp;
			temp = temp->next;
		}
		if(temp == head){
			head = NULL;
		}
		else{
			secondlast -> next = NULL;
		}
		free(temp);
	}
}
int main(){
	insert(12);
	insert(56);
	del_end();
	return 0;
}
