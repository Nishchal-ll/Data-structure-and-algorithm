#include<iostream>
using namespace std;
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9};
	int flag,key;
	cout<<"Enter the element you want to search:"<<endl;
	cin>>key;
	for(int i=0;i<10;i++){
		if(key==a[i]){
			flag=1;
			break;
		}
		else{
			flag=0;
		}
	}
	if(flag==1){
		cout<<"Element found"<<endl;
	}
	else{
		cout<<"Element not found"<<endl;
	}
	return 0;
}
