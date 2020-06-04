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
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
void solve(){
    ll n,k,sum=0, count=0;
    cin>>n>>k;
    multiset <int, greater <int>> arr;
    rep(i,0,n){
        ll x;
        cin>>x;
        arr.insert(x);
        sum+=x;
    }
    if(k>(1.5*sum))cout<<"Evacuate"<<endl;
    else{
        while(k>0){
            ll x;
            x = *arr.begin();
            arr.erase(arr.begin());
            k-=x;
            x/=2;
            arr.insert(x);
            count+=1;
        }
    }
    cout<<count<<endl;

}   

int main(){
    fastio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    while(t--)
    solve();
    return(0);    
}