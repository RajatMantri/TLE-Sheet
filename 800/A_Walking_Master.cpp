#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d<b) cout<<-1<<endl;
        else{
            if(d-b+a<c) cout<<-1<<endl;
            else{
                cout<<d-b+(d-b+a)-c<<endl;
            }
        }
    }
}