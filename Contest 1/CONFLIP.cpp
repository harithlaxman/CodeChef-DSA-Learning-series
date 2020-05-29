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
    ll g;
    cin>>g;
    rep(i,0,g){
        ll I,n,q;
        cin>>I>>n>>q;
        if(I==q){
            cout<<(n/2)<<endl;
        }
        else{
            if(n%2==0){
                cout<<(n/2)<<endl;
            }
            else{
                cout<<(n/2)+1<<endl;
            }
        }   
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