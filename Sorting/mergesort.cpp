#include<iostream>
using namespace std;
int merge(int arr[],int l,int mid,int r){
   int n1=mid-l+1;
   int n2=r-mid;
   int a[n1];
   int b[n2];//temp array
   for(int i=0;i<n1;i++){
       a[i]=arr[l+i];
   }
   for(int i=0;i<n2;i++){
       b[i]=arr[mid+1+i];
   }
   int i=0;
   int j=0;
   int k=l;
   while(i<n1&&j<n2){
       if(a[i]<b[j]){
           arr[k]=a[i];
           k++;
           i++;
       }
       else{
           arr[k]=b[j];
           k++;
           j++;
       }
   }
    while(i<n1){
           arr[k]=a[i];
           k++;
           i++;
       }
       while(j<n2){
           arr[k]=b[j];
           k++;
           j++;
       }
       return 0;
} 

void msort(int arr[],int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        msort(arr,l,mid);
        msort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    msort(arr,0,n-1);
    	cout<<"Sorted array is: "<<endl;
	 for(int m=0;m<n;m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}
