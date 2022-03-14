#include <iostream>
using namespace std;
int counts=0;

void Bubble(int arr[],int len)
{
    counts++;
    int temp;
    counts++;
    for(int i=0;i<len;i++)
    {
        counts++;
        for(int j=0;j<len-i;j++)
        {
            counts++;

            if(arr[j+1]<=arr[j])
            {
                counts++;
                temp=arr[j];
                counts++;
                arr[j]=arr[j+1];
                counts++;
                arr[j+1]=temp;
                counts++;
            }

        }
        counts++;
    }
    counts++;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<counts;
}
int main()
{
    int arr[]={10,4,5,2,8,9,67,45,32,7,6,41};
    int len=sizeof(arr)/sizeof(int);
    Bubble(arr,len);
}
