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
    ll n, m=0;
    cin>>n;
    ll arr[n];
    rep(i, 0, n){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    rep(i,0,n){
        if(m<(arr[i]*(n-i))){
            m = arr[i]*(n-i);
        }
    }
    cout<<m;
}

int main(){
    fastio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // ll t;
    // cin>>t;
    // while(t--)
    solve();
    return(0);    
}