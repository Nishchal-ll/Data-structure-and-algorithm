#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(a==0||b==0){
		return 0;
	}
	else if(a==b){
		return a;
	}
	else if(a>b){
		return gcd(a-b,b);
	}
	else{
		return gcd(a,b-a);
	}
}
int main(){
	int m,n;
	cout<<"Enter the number for gcd(a,b)"<<endl;
	cin>>m>>n;
	cout<<"The gcd is "<<gcd(m,n)<<endl;
	return 0;
}
