#include<iostream>
using namespace std;
int missing_number(long int size,long int arr[])
{
    long int i,sum=0;
    for(i=0;i<size-1;i++)
    {
        sum=sum+arr[i];
    }
    long int total_sum=(size*(size+1))/2;
    return total_sum-sum;

}

int main()
{
    long int n;
    //cout<<"enter the size"<<endl;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    long int y=missing_number(n,arr);
    cout<<y;
    return 0;
    


}