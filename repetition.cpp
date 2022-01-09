#include <iostream>
using namespace std;
int solve(string s){
    int n=s.size();
    int max_count=1;
    int count=1;
    char prev=s[0];
    for(int i=1;i<n;i++){
        if(s[i]==prev){
            count++;
            if(max_count<count){
                max_count=count;
            }
            continue;
        }
        else{
            //cout<<count<<" ";
            prev=s[i];
            count=1;
        }
    }
    if(max_count<count){
        max_count=count;
    }
    return max_count;
}
int main() {
    string s;
    cin>>s;
    //cout<<endl;
    cout<<solve(s);
}