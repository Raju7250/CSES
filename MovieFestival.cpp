#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,i,curr_ele=0,count=0;
    cin>>n;
    vector<pair<int,int>>v;
    for(i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(v[i].second>=curr_ele)
        {
            count++;
            curr_ele=v[i].first;
        }

    }
    cout<<count<<endl;
}