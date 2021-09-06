//#define OHSOLUTION

//================code===================//

//#define TLE


#ifdef TLE
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#endif

#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <ctime>
#include <random>
#include <chrono>
//#include <stdint.h>

#define ci(t) cin>>t
#define co(t) cout<<t
#define LL long long
#define ld long double
#define fa(i,a,b) for(int i=a;i<b;++i)
#define fd(i,a,b) for(int i=a;i>b;--i)
#define setp tuple<LL,LL,LL>
#define setl pair<LL,LL>

#define eps 0.000001

using namespace std;


LL gcd(LL a, LL b)
{
	if (!(a && b)) return max(a, b);
	return a % b ? gcd(b, a % b) : b;
}

#ifdef OHSOLUTION
#define ce(t) cerr<<t
#define AT cerr << "\n=================ANS=================\n"
#define AE cerr << "\n=====================================\n"
#define DB(a) cerr << __LINE__ << ": " << #a << " = " << (a) << endl;
#define __builtin_popcount __popcnt
#define __builtin_popcountll __popcnt64
#define LLL LL
#else
#define AT
#define AE
#define ce(t)
#define DB(a)
#define LLL __int128
#endif

pair <int, int> vu[9] = { {0,1},{0,-1},{1,0} ,{-1,0},{0,0},{1,1}, {1,-1} , {1,-1},{-1,-1} }; //RDLU EWSN
mt19937 rng((unsigned int)chrono::steady_clock::now().time_since_epoch().count());


template<typename T, typename U> void ckmax(T& a, U b) { a = a < b ? b : a; }
template<typename T, typename U> void ckmin(T& a, U b) { a = a > b ? b : a; }
struct gcmp { bool operator()(LL a, LL b) { return a < b; } bool operator()(setl& a, setl& b) { return a.second < b.second; } };
struct lcmp { bool operator()(LL a, LL b) { return a > b; } bool operator()(setl& a, setl& b) { return a.second > b.second; } };

const int max_v = 1e6 + 7;
const int max_k = 5e2 + 7;
const int bsz = (1ll << 20) + 7;
const int INF = 0x3f3f3f3f;
const LL LNF = 0x3f3f3f3f3f3f3f3f;
const LL mod = 998244353;//1e9 + 7;//
template<typename T, typename U> void MOD(T& a, U b) { a += b; if (a < 0) a = a % mod + mod; if (a >= mod) a -= mod; };


int main()
{
#ifdef OHSOLUTION
	freopen("input.txt", "r", stdin);
#endif
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n; ci(n);
	
	vector<int> cnt(10,0);
	cnt[1] = cnt[4] = cnt[7]=1;

	auto check=[&](int x)
	{
		while(x)
		{
			if(cnt[x%10]) return false;
			x/=10;		
		}	
		return true;
	};
	
	auto f=[&](int x)
	{
		fd(i,x,-1) if(check(i)) return i;
		assert(0);
	};

	auto g=[&](int x)
	{
		fa(i,x,1000) if(check(i)) return i;
		assert(0);
	};

	if(check(n)) co(n);
	else co(f(n)<<" "<< g(n));
	

	return 0;
}



