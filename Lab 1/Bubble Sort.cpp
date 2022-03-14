#include <iostream>
using namespace std;

void Bubble(int arr[],int len)
{
    int temp;
    int count=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            count++;
            if(arr[j+1]<=arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<count;
}
int main()
{
    int arr[]={10,4,5,2,8,9,67,45,32,7,6,41};
    int len=sizeof(arr)/sizeof(int);
    Bubble(arr,len);
}
