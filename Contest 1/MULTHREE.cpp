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
    ll k,x,y,n,sum=0;
    cin>>k>>x>>y;
    if(x+y==10)
        cout<<"NO"<<endl;
    else{
        int temp=(x+y)%10;
        if(temp%2==0){
            n=k-2;
            ll q=n/4 , r=n%4;
            sum+=(q*20);
            rep(i,0,r){
                sum+=temp;
                temp=(temp*2)%10;
            }
        }
        else{
            n = k-3;
            ll q=n/4 , r=n%4;
            sum+=((q*20)+temp);
            temp=(temp*2)%10;
            rep(i,0,r){
                sum+=temp;
                temp=(temp*2)%10;
            }
        }
    }
    if(sum%3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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