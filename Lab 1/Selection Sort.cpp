#include <iostream>
using namespace std;
int counts=0;

void Selection(int arr[],int len)
{
    int min=0;
    counts++;
    int temp;
    counts++;
    for(int i=0;i<len;i++)
    {
        counts++;
        min=i;
        counts++;
        for(int j=i;j<len;j++)
        {
            counts++;
            if(arr[j]<arr[min])
            {
                counts++;
                min=j;
                counts++;
            }
        }
        counts++;

                temp=arr[min];
                counts++;
                arr[min]=arr[i];
                counts++;
                arr[i]=temp;
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
    Selection(arr,len);
    return 0;
}
