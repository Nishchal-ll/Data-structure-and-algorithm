#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int evaluation(string s){
	stack<int>st;
	
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&& s[i]<='9'){
			st.push(s[i]-'0');
		}
		else{
			int op1=st.top();
			st.pop();
			int op=st.top();
			st.pop();
			
			switch(s[i]){
				case '+':
					st.push(op+op1);
					break;
					
				case '-':
					st.push(op-op1);
					break;
					
				case '*':
					st.push(op*op1);
					break;
					
				case '/':
					st.push(op/op1);
					break;
					
				case '^':
					st.push(pow(op,op1));
					break;
			}
		}
	}
	return st.top();
	}
	int main(){
		string s;
	cout<<"Enter the postfix expression"<<endl;
	cin>>s;
	cout<<evaluation(s);

		return 0;
	}
