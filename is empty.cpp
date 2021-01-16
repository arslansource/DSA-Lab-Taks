#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
struct Node* head = NULL;
void insert(int value){
	struct Node* new_node;
	new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = value;
	new_node->next = head;
	head = new_node;
}
void is_empty(){
	if(head==NULL){
		cout<<"LL is empty"<<endl;
	}
	else{
		cout<<"LL is Not empty"<<endl;
	}
}
int main(){
	is_empty();
	insert(12);
	insert(34);
	is_empty();
	return 0;
}
