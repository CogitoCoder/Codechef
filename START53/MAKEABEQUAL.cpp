#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <string>
#include <iomanip>

using namespace std;
 
#ifdef LOCAL
	#define eprintf(...) {fprintf(stderr, __VA_ARGS__);fflush(stderr);}
#else
	#define eprintf(...) 42
#endif
 
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;

 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define tp top()
#define pp pop()
#define kk empty()
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define endl			'\n'
#define int long long
 
void onlineJudge()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
#endif
}

template<typename ...Args>
void Read(Args&... args) {
    (cin >> ... >> args);
}


/////////////////////////////////////////////////////////

void mainCode(int t) {
	// Write Your Code Here
	int N; cin >> N;
	int A[N] = {0}; 
	for (int i = 0; i < N; ++i)
		cin >> A[i];
	int k, sum = 0, countNegOnes = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> k;
		A[i] -= k;
		if(A[i] < 0) countNegOnes += (A[i] * -1);
		sum += A[i];
	}
	if(sum) cout << -1;
	else {
		cout << countNegOnes;
	}	
	if(t) 
	cout << endl;
} 

/////////////////////////////////////////////////////////
signed main()
{
    onlineJudge();
    int t = 1;
    cin >> t;
    while(t--) {
    	mainCode(t);
    }
    return 0;
}