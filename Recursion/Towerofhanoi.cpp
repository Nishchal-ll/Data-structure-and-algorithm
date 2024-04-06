#include<iostream>
using namespace std;
static int step=0;
void TOH(int n,char a,char b,char c){
	if(n>0){
		TOH(n-1,a,b,c);
		cout<<"Step-"<<step<<" ";
		cout<<"Move disk "<<n-1<<"from "<<a<<"to "<<c<<endl;
		step++;
		TOH(n-1,c,b,a);
	}
}
int main(){
	int n;
	cout<<"Enter the number of disks"<<endl;
	cin>>n;
	TOH(n,'S','T','D');
	cout<<"Total steps is "<<step;
	return 0;
}
