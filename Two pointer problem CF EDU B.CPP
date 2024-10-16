///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define tc int t; cin>>t; while(t--)
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
#define input(v)   for(auto &x: v)cin>>x
#define SetBit(x,k) (x|=(1LL<<k))
#define ClearBit(x,k) (x&=~(1LL<<k))
#define CheckBit(x,k) ((x>>k)&1)
#define ChangeBit(x,k) (x^=(1LL<<k))
#define mod 1000000007
#define N 100005

ll fx[]={0,0,1,-1,1,1,-1,-1};
ll fy[]={1,-1,0,0,-1,1,-1,1};

void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

int main()
{
    optimize();
 int n,m;
 cin>>n>>m;
 vector<int>v(n),a(m);
 for(int i=0;i<n;i++) cin>>v[i];
 for(int i=0;i<m;i++) cin>>a[i];
 int l=0,r=0,ans=0;
 while(r<m)
 {
     while(v[l]<a[r] && l<n)
     {
         ans++;
         l++;
     }
     r++;
     cout<<ans<<" ";
 }
 cout<<endl;
return 0;
}

