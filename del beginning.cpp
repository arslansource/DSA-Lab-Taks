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
void del_beg(){
	if(head == NULL){
		cout<<"No node to delete"<<endl;
	}
	else{
		struct Node* temp;
		temp = head;
		head = head -> next;
		free(temp);
	}
}
int main(){
	insert(12);
	insert(56);
	del_beg();
	return 0;
}
