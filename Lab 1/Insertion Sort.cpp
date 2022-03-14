#include <iostream>
using namespace std;

void Insertion(int arr[],int len)
{
    int key=0,temp;
    for(int i=1;i<len;i++)
    {
        int key=arr[i];
        int pos=-1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>key)
            {
                arr[j+1]=arr[j];
                pos=j;
            }
            else{
                break;
            }
        }
        if(pos!=-1){
            arr[pos]=key;
        }

    }

     for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }



}
int main()
{
    int arr[]={10,4,5,2,8,9,67,45,32,7,6,41};
    int len=sizeof(arr)/sizeof(int);
    Insertion(arr,len);
    return 0;
}
