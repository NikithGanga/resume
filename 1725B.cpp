#include <bits/stdc++.h>
using namespace std;
/* #pragma GCC optimize("O3,unroll-loops") */
/* #pragma GCC optimize("avx2,bmi,bmi2,lzcnt,popcnt") */
/////////////////////////////////////////////////////////////////
/* #include <ext/pb_ds/assoc_container.hpp> */
/* #include <ext/pb_ds/tree_policy.hpp> */
/* using namespace __gnu_pbds; */
/* template <class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; */
/* template <class K, class V> using omap = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>; */
//member functions :
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set
//double a;
///////////////////////////////////////////////////////////////////////////////////////////////
///AtCoder Module Set
/* #include<atcoder/modint> */
//change value based on being used	-this one rt here
/* using mint = atcoder::static_modint<998244353>; */
//u64 a,b,c,d,e,f; cin >> a >> b >> c >> d >> e >> f ;
/* Modint ans = Modint(a) * Modint(b) * Modint(c) - Modint(d) * Modint(e) * Modint(f); */
/* cout << ans.val() << "\n"; */
///////////////////////////////////////////////////////////////////////////////////////////////
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);cout.precision(dbl::max_digits10);
#define vt vector
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define F first
#define S second
#define mp make_pair
#define ar array
#define ld long double
#define sz(x) (int)x.size()
#define all(a) (a).begin(), (a).end()
#define rall(x) x.rbegin(), x.rend()
#define SUM(...) accumulate(all(__VA_ARGS__),0LL)
#define dSUM(...) accumulate(all(__VA_ARGS__),0.0L)
#define MSUM(...) accumulate(all(__VA_ARGS__),Modint{})
#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)
#define each(x,y,a) for(auto&&[x,y]:a)
#define fill(a,b) memset(a, b, sizeof(a))
typedef std::numeric_limits< double > dbl;
#define overload4(a,b,c,d,name,...) name
#define ppc(x) __builtin_popcountll(x)
#define uni(x) x.erase(unique(all(x)),x.end())
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define cases() cout << "Case #" << i+1 << ":";
#define time() cerr << "\ntime taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__);
#else
#define debug(x)
#define dbg(...)
#define time()
#define cases()
#endif
// debug() -> PA
// DBG() -> WL ]
// dbg() -> WL << >> LINE STUFF
void DBG() {
	cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#define MOD7 1000000007ll
#define MOD9 1000000009ll
#define MOD99 998244353ll
using uint = unsigned int;
const int INF=0x3fffffff;
constexpr ld EPS = 1e-9;
constexpr double PI=4*atan(1);

#define G_R 1.618033988749895 // Number of digits(15).
const ld DINF=numeric_limits<ld>::infinity();
using vi = vector<int>;
typedef vector< vi > vvi;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<ld, ld>;
typedef set<int> si;
typedef unsigned long long ull;
typedef long long lli;
typedef long double lld;
void YES() { cout<<"YES\n"; }
void NO() { cout<<"NO\n"; }
void Yes() { cout<<"Yes\n"; }
void No() { cout<<"No\n"; }
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define mine(a)    (*min_element((a).begin(), (a).end()))
#define maxe(a)    (*max_element((a).begin(), (a).end()))
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
	return (ull)rng() % B;
}
template<class T> using pq = priority_queue<T, vector<T>, greater<T>>;
template <typename T> bool chmax(T &m, const T q) { if (m < q) {m = q; return true;} else return false; }
template <typename T> bool chmin(T &m, const T q) { if (m > q) {m = q; return true;} else return false; }
template <typename T> istream &operator>>(istream &is, vector<T> &vec) { for (auto &v : vec) is >> v; return is; }
template<typename T>  ostream& operator<<(ostream& os,  vector<T>  v){for (auto& i : v) os << i << ' '; return os;}
template<typename T, typename U> istream& operator>>(istream& is, pair<T, U> &p){is >> p.first >> p.second;        return is;}
template<typename T, typename U> ostream& operator<<(ostream& os, pair<T, U>  p){os << p.first << ' ' << p.second; return os;}
ll min(lli a,lli b) { if (a<b) return a; return b; }
ll max(lli a,lli b) { if (a>b) return a; return b; }
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#include<cassert>
template <typename T, typename S> T ceil(T x, S y) {
    assert(y);
    return (y < 0 ? ceil(-x, -y) : (x > 0 ? (x + y - 1) / y : x / y));
}
//sort_unique(A) // sort_unique(A).size()
template <typename T> vector<T> sort_unique(vector<T> vec) { sort(vec.begin(), vec.end()), vec.erase(unique(vec.begin(), vec.end()), vec.end()); return vec; }
// use ceil(54,10) -> 6
template <typename T, typename S> T floor(T x, S y) {
    assert(y);
    return (y < 0 ? floor(-x, -y) : (x > 0 ? x / y : x / y - (x % y == 0 ? 0 : 1)));
}
// use floor(54,10) -> 5
template <class T> T POW(T x, int n) {
    T res = 1;
    for(; n; n >>= 1, x *= x)
        if(n & 1) res *= x;
    return res;
} //Using BinPowExpo --> (5,2)
string to_string(char c) {
	return string(1, c);
}
string to_string(bool b) {
	return b?"true":"false";
}
string to_string(const char* s) {
	return string(s);
}
string to_string(string s) {
	return s;
}
string to_string(vt<bool> v) {
	string res;
	FOR(sz(v))
		res+=char('0'+v[i]);
	return res;
}
template<class A> void write(A x) {
	cout << to_string(x);
}
template<class H, class... T> void write(const H& h, const T&... t) {
	write(h);
	write(t...);
}
void print_() {
	write("\n");
}
template<class H, class... T> void print_(const H& h, const T&... t) {
	write(h);
	if(sizeof...(t))
		write(' ');
	print_(t...);
}
template<class A> void read(vt<A>& v);
template<class A, size_t S> void read(ar<A, S>& a);
template<class T> void read(T& x) {
	cin >> x;
}
void read(double& d) {
	string t;
	read(t);
	d=stod(t);
}
void read(long double& d) {
	string t;
	read(t);
	d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
	read(h);
	read(t...);
}
constexpr int d4x[4] = {0, 0, 1, -1};
constexpr int d4y[4] = {1, -1, 0, 0};
constexpr int d8x[8] = {0, 0, 1, -1, 1, -1, 1, -1};
constexpr int d8y[8] = {1, -1, 1, -1, -1, 1, 0, 0};


void solve(){
	ll n;
	cin >> n;
	vt<ll> a(n);
	cin >> a;
	ll prev =0,nxt = 0;
	for(int i=a[0];i<n;i++)
	{

	}
}

int32_t main() {
		IOS;
   	int tc=1;
		cout << unitbuf;

		/* read(tc); */
   	FOR(tc) {
			/* cases(); */
    		solve();
    	}
		time();
		return 0;
 }


