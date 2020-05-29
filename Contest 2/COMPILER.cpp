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
    ll save=0;
    stack <int> q;
    cin>>s;
    rep(i,0,s.length()){
        if(s[i]=='<'){q.push(1);}
        else{
            if(q.empty())break;
            else{q.pop();}
        }
        if(q.empty()&&i!=0)save=i+1;
    }
    if(save)
    cout<<save<<endl;
    else
    cout<<0<<endl;
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