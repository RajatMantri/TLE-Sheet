#include<bits/stdc++.h>
#define ll long long
using namespace std;
const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0) cout<<"Second";
        else cout<<"First";
        cout<<endl;
    }
}