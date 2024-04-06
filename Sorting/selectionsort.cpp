#include<iostream>
using namespace std;
int main(){
	int n,min,temp;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Enter a["<<i<<"]: ";
    cin>>arr[i];
    cout<<endl;
    }
  for(int i=0;i<n-1;i++){
  	min=i;
  	for(int j=i+1;j<n;j++){
  		if(arr[j]<arr[min]){
  			min=j;
		  }
	  }
	  if(min!=i){
	  	temp=arr[i];
	  	arr[i]=arr[min];
	  	arr[min]=temp;
	  }
  }
cout<<"Sorted array is: ";
    for(int m=0;m<n;m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}
