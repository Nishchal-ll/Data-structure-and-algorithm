#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int part(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void sort(int arr[],int l, int r){
    if(l<r){
        int pi=part(arr,l,r);
        sort(arr,l,pi-1);
        sort(arr,pi+1,r);
    }
}
int main(){
	int n,temp,j;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Enter a["<<i<<"]: ";
    cin>>arr[i];
    cout<<endl;
    }
    sort(arr,0,n-1);
    	cout<<"Sorted array is: "<<endl;
	 for(int m=0;m<n;m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}
   
