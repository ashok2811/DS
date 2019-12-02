#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;   //pointer to node
};


void Insert(Node** head, int x){
	Node* temp = new Node();
	temp -> data = x;
	temp -> next = NULL;
	if (*head != NULL)
	{
		temp -> next = *head;
	}

	*head =temp;
	
}

void Print(Node* head) {
	cout << "List is : ";
	Node* temp = head ;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}

	cout << endl;

}


int main(int argc, char const *argv[])
{

Node* head = NULL; //empty list
int n ; 

cout <<  "How many numbers ?"<<endl;
cin >> n;

for (int i = 0; i < n; ++i)
{
	int x;
	cout <<  "Enter the number"<<endl;
	cin >> x;
	Insert(&head, x);

	Print(head);
	
}

	
	return 0;
}

