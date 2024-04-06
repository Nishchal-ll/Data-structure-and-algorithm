#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Enter a["<<i<<"]: ";
    cin>>arr[i];
    cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array is: ";
    for(int m=0;m<n;m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}
