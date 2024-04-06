#include <iostream>
using namespace std;

int main()
{
    int data[10]={6,7,45,23,77,50,49,51,69,73};
    int hash[10]={0};
    
    for(int i=0;i<10;i++)
    {
        int temp;
        temp=data[i];
        
        for(int j=0;j<100;j++,temp++)
        {
            if(hash[temp%10]==0)
            {
                hash[temp%10]=data[i];
                break;
            }
        }
    }
    
    for(int i=0;i<10;i++)
    {
        cout<<hash[i]<<", ";
    }
    
    return 0;
}
