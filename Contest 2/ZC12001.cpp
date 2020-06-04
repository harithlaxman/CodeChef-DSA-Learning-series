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
    ll n,m=0,depth_index, size_index, size=0;
    cin>>n;
    stack <ll> s;
    ll arr[n];
    rep(i,0,n){
        cin>>arr[i];
        if(arr[i]==1){
            s.push(arr[i]);
            arr[i] = s.size();
            if(arr[i]>m){m=arr[i];depth_index=i+1;}
        }
        else{
            s.pop();
            arr[i] = 0;
        }
    }
    int j = 0;
    rep(i,0,n){
        if(i==(n-1)){
            if(n-j > size){size=n-j;size_index=j+1;}
            j = i;
        }
        if(arr[i]==1){
            if(i-j > size){size=i-j;size_index=j+1;}
            j = i;
        }
    }
    cout<<m<<" "<<depth_index<<" "<<size<<" "<<size_index;
}

int main(){
    fastio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // ll t;
    // cin>>t;
    // while(t--)
    // cout<<t<<endl;
    solve();
    return(0);    
}