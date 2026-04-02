#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            cin>>k;
            freq[k]++;
        }
        if(freq.size()>2) cout<<"No";
        else{
            if(freq.size()==1) cout<<"Yes";
            else{
                int mini=INT_MAX;
                for(auto &i:freq) mini=min(mini,i.second);
                if(mini==n/2) cout<<"Yes";
                else cout<<"No";
            }
        }
        cout<<endl;
    }
    return 0;
}