#include<iostream>
int factorial(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
using namespace std;
int main(){
	int n,fact;
	cout<<"Enter a number "<<endl;
	cin>>n;
	fact=factorial(n);
	cout<<"Factorial is "<<fact<<endl;
	return 0;
}
