#include<bits/stdc++.h>
#define ll long long
using namespace std;
const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> box(n);
        int fl=1;
        for(int i=0;i<n;i++){
            cin>>box[i];
            if(i>0&&box[i]<box[i-1]) fl=0;
        }
        if(k==1&&fl==0) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}