#include<iostream>
#include<stack>
using namespace std;

int precedence(char c){
	if (c=='^'|| c=='$'){
	return 3;
	}
	else if(c=='/'||c=='*'){
		return 2;
	}
	else if(c=='+'||c=='-'){
		return 1;
	}
	else{
		return -1;
	}
}
string infixtopostfix(string s){
	stack<char>st;
	string postfix;
	
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
			postfix=postfix+s[i];
		}
		else if(s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				postfix=postfix+st.top();
				st.pop();
			}
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			while(!st.empty() && precedence(st.top())>=precedence(s[i])){
				postfix=postfix+st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		postfix=postfix+st.top();
		st.pop();
	}
	return postfix;
}
int main(){
	string s;
	cout<<"Enter the infix expression"<<endl;
	cin>>s;
	cout<<infixtopostfix(s);
}

