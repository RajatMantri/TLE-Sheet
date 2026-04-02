#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>x>>s;

        int count=0;

        while(true){
            if(x.length()>=s.length()) break;
            x=x+x;
            count++;
        }
        
        if(x.find(s)!=string::npos) cout<<count;
        else{
            x=x+x;
            if(x.find(s)!=string::npos) cout<<count+1;
            else cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}