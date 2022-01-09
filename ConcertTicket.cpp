#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,c,i;
    int j=0;
    cin>>t>>c;
    vector<int>v(t);
    for(i=0;i<t;i++)
    {
        cin>>v[i];
    }
    vector<int>v1(c);
    for(i=0;i<c;i++)
    {
        cin>>v1[i];
        
    }
    while(j<c)
    {
    for(i=0;i<c;)
    {
            if(v1[j]>=v[i])
            {
                cout<<v[j];
                vector<int>::iterator it;
               v.erase(it+j);
            }
            else
            i++;
    }
    j++;
    }
            
        
}