#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++) cout<<"1 ";
            cout<<endl;
        }
        else{
            //odd n
            if(n&1){
                if(k<=2) cout<<"NO"<<endl;
                else{
                    cout<<"YES"<<endl;
                    cout<<1+(n-3)/2<<endl;
                    cout<<"3 ";
                    for(int i=0;i<(n-3)/2;i++) cout<<"2 ";
                    cout<<endl;
                }
            }
            else{
                if(k==1) cout<<"NO"<<endl;
                else{
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++) cout<<"2 ";
                    cout<<endl;
                }
            }
        }
    }
}