#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define vec vector<ll>
#define pb  push_back
#define pai pair<ll,ll>
// #define str string
#define all(a) (a).begin(),(a).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    string s, s1, s2;
    cin>>s;
    s1 = s.substr(0, (s.length())/2);
    if(s.length()%2==0){
        s2 = s.substr((s.length())/2);
    }
    else{
        s2 = s.substr(((s.length())/2)+1);
    }
    int a[26]={0}, b[26]={0};
    for(int i=0;i<s1.length();++i){
        a[int(s1[i])-97]++;
        b[int(s2[i])-97]++;
    }
    bool result=true;
    for(int i=0;i<26;++i){
        if(a[i]!=b[i]){
            result=false;
            break;
        }
    }
    if(result){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return(0);    
}