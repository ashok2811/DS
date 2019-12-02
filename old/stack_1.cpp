#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 20
int A[MAX_SIZE];
int top =-1;
void Push(int x){
    if(top == MAX_SIZE-1){
        cout << "Error: Stack Overflow" <<endl;
        return;
    }
    A[++top] = x;
}
void Pop(){
    if (top == -1)
    {
        cout << "Error : No element to pop" <<endl;
        return;
    }
    top--;
    

}

int Top(){
    return A[top];
}

int isEmpty(){
    if(top == -1){
        return 1;
    }

    return 0;

}

void Print(){
    cout << "Stack : ";
    for (int i = 0; i <=top; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;    

}


int main() {
for (int i = 0; i < 20; i++)
    {
        Push(i); Print();
    }

    for (int i = 0; i < 20; i++)
    {
        Pop(); Print();
    }
    

    return 0;
}