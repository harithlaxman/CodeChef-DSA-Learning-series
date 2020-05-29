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
	int activities, score =0, s;
	string origin, act;
	cin>>activities>>origin;
	rep(i,0,activities){
		cin>>act;
		if(act=="CONTEST_WON"){
			cin>>s;
			if(s>20){
			    score+=300;
			}
			else{
			    score+=(320-s);   
			}
		}
		else if(act=="TOP_CONTRIBUTOR"){
			score=score+300;
		}
		else if(act=="BUG_FOUND"){
			cin>>s;
			score=score+s;
		}
		else if(act=="CONTEST_HOSTED"){
			score = score+50;
		}
	}
	if(origin=="INDIAN"){
	    cout<<score/200<<endl;
	}
	else{
	    cout<<score/400<<endl;
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