#include<iostream>
#include<stack>
#include<algorithm>
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
string infixtoprefix(string s){
	
	stack<char>st;
	string result;
	reverse(s.begin(),s.end());
	
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
			result=result+s[i];
		}
		else if(s[i]==')'){
			st.push(s[i]);
		}
		else if(s[i]=='('){
			while(!st.empty() && st.top()!=')'){
				result=result+st.top();
				st.pop();
			}
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			while(!st.empty() && precedence(st.top())>=precedence(s[i])){
				result=result+st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		result=result+st.top();
		st.pop();
	}
	reverse(result.begin(),result.end());
	return result;
}
int main(){
	string s;
	cout<<"Enter the infix expression"<<endl;
	cin>>s;
	cout<<infixtoprefix(s);
}
