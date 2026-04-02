#include<bits/stdc++.h>

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b;
        int count=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(i==0){
                b.push_back(x);
                count++;
            }
            else{
                int mini=min(b[count-1]-1,x);
                if(mini!=0){
                    b.push_back(mini);
                    count++;
                }
                b.push_back(x);
                count++;
            }
        }

        cout<<count<<endl;
        for(int i=0;i<count;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}