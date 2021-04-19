#include <bits/stdc++.h>

using namespace std;

    int k; 
    string s,ans;

bool isLarger(){
    for(int i(0);i<s.length();i++) 
        if(s[i]>ans[i]) return false;
        else if(s[i]<ans[i]) return true;

    return true;
}

void Try(int i,int curK){

    if(i>=s.length()-1 || curK==k) {
        return;
    }
    
    int temp=i;
    for(int j(i+1);j<s.length();j++)
        if(s[j]>s[temp]) temp=j;

    if(s[temp]==s[i]) Try(i+1,curK);
    else 
      for(int j(i+1);j<s.length();j++){
        if(s[j]==s[temp]) {
            swap(s[i],s[j]);
            if(!isLarger()) for(int x(0);x<s.length();x++) ans[x]=s[x];
            Try(i+1,curK+1);
            swap(s[i],s[j]);
        }
    }

}
main(){
    int t; cin>>t;
    while(t--){
        ans="";
        cin>>k;
        cin>>s;
//        for(int i(0);i<s.length();i++) ans+='0';
        for(int i(0);i<s.length();i++) ans+=s[i];
        Try(0,0);
        cout<<ans<<'\n';
        
         
    }
}
/*
    n= 32415678
    k=3;

    87615423 =max

*/
