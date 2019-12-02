#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;	
		
};

struct Node* Insert(struct Node* head, int data, int n){
	Node* temp1 = new Node();
	temp1 -> data = data;
	temp1 -> next = NULL;
	if (n==1)
	{
		temp1 -> next = head;
		head =temp1;
		return head;
	}

	Node* temp2 = head;
	for (int i = 0; i < n-2; i++)
	{
		temp2 = temp2 -> next; 
	}

	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;
	return head;
	
}

void Print(struct Node* head) {
	cout << "List is : ";
	Node* temp = head ;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}

	cout << endl;

}

struct  Node* Delete(struct Node* head, int n){

	Node* temp1 =head;
	if (n==1)
	{
		head = temp1 -> next;
		delete temp1;
		return head;
	}


	int i;
	for (int i = 0; i < n-2; ++i)
	{
		temp1=temp1 -> next ;  //temp1 points to n-1 th Node
	}

	Node* temp2 =temp1 -> next;   //nth node

	temp1 -> next = temp2 -> next;  // n+1 th node 
	delete (temp2);
	return head;
}

struct  Node* reverse(struct Node* head){

	Node* curr = head;
	Node* prev = NULL;
	Node* next = NULL;

	while (curr != NULL){
		next = curr -> next; 
		curr -> next = prev;
		prev = curr;
		curr =next;
	}

	head =prev;
	return head;

}


int main(int argc, char const *argv[])
{

	Node* head = NULL;


	head = Insert(head, 1,1);
	head = Insert(head, 3,1);
	head = Insert(head, 4,2);
	head = Insert(head, 6,1);
	head = Insert(head, 7,4);
	head = Insert(head, 8,3);

	Print(head);
	head = reverse(head);
	Print(head);
	head = Delete(head, 4);
	Print(head);
	return 0;
}
