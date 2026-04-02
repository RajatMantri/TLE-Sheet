#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=a+(c+1)/2;
        int y=b+c/2;

        if(x>y) cout<<"First";
        else cout<<"Second";
        cout<<endl;
    }
    return 0;
}