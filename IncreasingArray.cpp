#include<iostream>
using namespace  std;
// int IncreasingArray()
// {

// }
int main()
{
    int size,count=0,i=0;
    cin>>size;
    int *p=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    int min=p[i];
    
    for(int j=i+1;j<size;)
    {
        if(min>p[j])
        {
            min=p[j];
            count=count+1;
            if(min>p[j-1])
            {
                min=p[j-1];
                count++;
            }
            else
            {
                j++;
            }
            
        }
    }
    cout<<count;

}

