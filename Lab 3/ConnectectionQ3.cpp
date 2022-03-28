#include <iostream>
#include <vector>
using namespace std;

vector<int> dfs(int s,vector<int> list[],vector<int> visit)
{
    visit[s]=1;


    for(int i:list[s])
    {

        if(visit[i]==0)
        {

            visit[i]=1;

           visit=dfs(i,list,visit);
        }
    }

    return visit;



}

int main()
{
    int v,e;

    cout<<"Enter number of vertices :";
    cin>>v;
    vector<int> list[v];
    vector<int> visit(v,0);


    cout<<"Enter the number of edges : ";
    cin>>e;
    for(int i=0;i<e;i++)
    {
        int s,d;
        cout<<"Enter the source : "<<endl;
        cin>>s;
        cout<<"Enter the Destination : "<<endl;
        cin>>d;

        list[s].push_back(d);
    }

  visit= dfs(0,list,visit);
  bool flag=true;
  for(int i=0;i<v;i++)
  {
      if(visit[i]==0)
      {
          flag=false;
      }
  }
  if(flag)
  {
      cout<<"Connected graph";
  }
  else{
    cout<<"Disconnected Graph";
  }



    return 0;
}

