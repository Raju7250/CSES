#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size,count=0;
    cin>>size;
    vector<int>v;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    vector<int>::iterator it;
    std::sort(v.begin(),v.end());
    it=std::unique(v.begin(),v.end());
    v.resize(std::distance(v.begin(), it)); 
    
    cout<<v.size();

}