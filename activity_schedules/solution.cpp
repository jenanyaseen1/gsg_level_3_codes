#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);;
int n,c=0;
vector<string>v{"Football","Swimming","Running"};
void rec(int d,string p,vector<string>s) {
    if(d==n) {
        for(string c:s) {
            cout<<c<<" ";
        }
        cout<<"\n";
        c++;
        return ;
    }
    for(string ss:v) {
        if(ss!=p) {
            s.push_back(ss);
            rec(d+1,ss,s);
            s.pop_back();
        }
    }
}
void sol() {

    cin>>n;
     rec(0,"",{});
    cout<<c;


}

int main() {
    FAST

    int t=1;//cin>>t;
    while(t--)
        sol();


}
