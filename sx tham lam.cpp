#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int arr[n],temp[n];
    for(int i(0);i<n;i++) {
        cin>>arr[i];
        temp[i]=arr[i];
    }
    sort(temp,temp+n);

    int ok=1;
    if(arr[n/2]==temp[n/2])
    for(int i(0);i<n/2;i++)
        if((arr[i]==temp[i]&&arr[n-1-i]==temp[n-1-i])||(arr[i]==temp[n-1-i]&&arr[n-1-i]==temp[i])) continue;
        else {
            ok=0;
            break;
        }
    
    else ok=0;
    if(ok) cout<<"Yes\n";
    else cout<<"No\n";
    }
}