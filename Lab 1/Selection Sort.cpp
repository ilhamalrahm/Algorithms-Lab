#include <iostream>
using namespace std;

void Selection(int arr[],int len)
{
    int min=0;
    int temp;
    for(int i=0;i<len;i++)
    {
        min=i;
        for(int j=i;j<len;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }

                temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
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
    Selection(arr,len);
    return 0;
}
