#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  roll,marks,i,n;
    string name;
    cin>>n;
    priority_queue<pair<pair<int,int>,string>>arr;
    for(i=1;i<=n;i++)
    {
        cin>>roll>>name>>marks;
        arr.push({{marks,-roll},name});
    }
    int cnt=0;
    cout<<"Newroll  MARKS  previousroll  name"<<endl;
    while(!arr.empty())
    {
        cnt++;
        cout<<cnt<<"  ";
        cout<<arr.top().first.first<<"  "<<-1*(arr.top().first.second)<<"  "<<arr.top().second<<endl;
        arr.pop();

    }
    return 0;
}
