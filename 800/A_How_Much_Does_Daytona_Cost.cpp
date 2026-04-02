#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int fl=0,a;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==k){
                fl=1;
            }
        }
        if(fl==0) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}