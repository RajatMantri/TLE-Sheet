#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        bool same=1;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0&&a[i]!=a[i-1]) same=0;
        }
        if(same){
            cout<<"NO";
        }
        else{
            sort(a.begin(),a.end());
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++){
                cout<<a[n-1-i]<<" "<<a[i]<<" ";
            }
            if(n&1) cout<<a[n/2];
        }
        cout<<endl;
    }
}