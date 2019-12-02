#include <bits/stdc++.h>
using namespace std;

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}


bool balParen(string C){
stack<char> S;
for (int i = 0; i < C.length(); i++)
{
    if(C[i]=='(' || C[i]=='{' || C[i]=='['){
        S.push(C[i]);
    }

    else if (C[i]==')' || C[i]=='}' || C[i]==']')
    {
        if (S.empty() || !ArePair(S.top(),C[i] ))
        {
            return false;
        }

        else
        {
            S.pop();
        }    
        
        
    }


}

    if(S.empty())
    {
        return true;
        }
    else
    {
        return false;
    }

}

int main(){

    string C;

    cout << "Enter the Expression : " ;
    cin >> C;
    if(balParen(C)){cout << "Balanced"<<endl;}
    else
    {
        cout <<"Not Balanced"<<endl; 
    }  

  return 0;

}