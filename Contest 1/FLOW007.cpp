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
    string s;
    cin>>s;
    reverse(all(s));
    rep(i, 0, s.length()){
        if(s[i]!='0'){
            s = s.substr(i);
            break;
        }
    }
    cout<<s<<endl;
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