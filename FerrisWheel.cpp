#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long int size,weight,count=0,i,j;
    cin>>size;
    cin>>weight;
    vector<int>v(size);
    for(i=0;i<size;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(j=0;j<size;)
    {
        if(v[j]+v[size-1]>weight)
        {
            count++;
            size--;

        }
        else if(v[j]+v[size-1]<=weight)
        {
            count++;
            j++;
            size--;
        }
    }
    cout<<count;
}