#include<iostream>
using namespace std;
int Check_Func(long int n)
{
    while(n!=1)
    {
        if(n%2==0)
    {
        cout<<n<<" ";
        n=n/2;
        

    }
    else
    {
        cout<<n<<" ";
        n=(3*n)+1;
    }
    
}
cout<<"1";
return 0;


}
int main()
{
    long int n;
    //cout<<"enter the integer\n";
    cin>>n;
    Check_Func(n);

    return 0;
}