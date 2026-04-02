#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int fl=0,maxi=0;;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
            if(i>=1&&arr[i]!=arr[i-1]) fl=1;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(maxi==arr[i]) count++;
        }
        if(fl){
            cout<<n-count<<" "<<count<<endl;
            for(int i=0;i<n;i++){
                if(arr[i]!=maxi) cout<<arr[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<n;i++){
                if(arr[i]==maxi) cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}