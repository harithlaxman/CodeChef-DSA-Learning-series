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
    ll n,a=0,b=0,na,nb;
    string s;
    cin>>n>>s;
    na=n;nb=n;
    rep(i,0,(2*n)){
        if(i%2==0){
            if(s[i]=='1')a+=1;
            na-=1;
        }
        else{
            if(s[i]=='1')b+=1;
            nb-=1;
        }
        if(b>(a+na) || a>(b+nb)){
                cout<<i+1<<endl;
                break;
            }
    }
    if(a==b)cout<<(2*n)<<endl;
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