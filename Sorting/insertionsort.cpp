#include<iostream>
using namespace std;
int main(){
	int n,temp,j;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cout<<"Enter a["<<i<<"]: ";
    cin>>a[i];
    cout<<endl;
    }
    for(int i=1;i<n;i++){
    	temp=a[i];
    	j=i-1;
    	while(i>0&&a[j]>temp){
    		a[j+1]=a[j];
    		j--;
		}
		a[j+1]=temp;
	}
	cout<<"Sorted array is: ";
    for(int m=0;m<n;m++){
        cout<<a[m]<<" ";
    }
    return 0;
}
