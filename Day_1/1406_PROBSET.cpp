// https://www.codechef.com/problems/PROBSET

#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector < pair<int, pii>
#define mii map<int, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) (int() x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define LOOP(n) for (int i = 0; i < n; i++)
#define but(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl
#define print1(a)    \
    for (auto x : a) \
    cout << x.F << " " << x.S << endl
#define print2(a, x, y)         \
    for (int i = x; i < y; i++) \
        cout << a[i] << " ";    \
    cout << endl

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1)
            x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << ':' << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

const int N = 200005;
void solve()
{
    int n, m;
    cin >> n >> m;

    // vii val;
    vector<vector<int>> val(n, vector<int>(m + 1));
    int temp;
    string str1, str2;
    vi t;
    int ans = 1;
    LOOP(n)
    {
        cin >> str1 >> str2;
        if (str1 == "correct")
        {
            val[i][0] = 1;
        }
        else
        {
            val[i][0] = 0;
        }

        for (int j = 1; j <= m; j++)
        {
            if (str2[j - 1] == '1')
            {
                val[i][j] = 1;
            }
            else
            {
                val[i][j] = 0;
            }
        }
    }

    // LOOP(n){
    //     for(int j=0;j<m+1;j++){
    //         cout<<val[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    int op;
    LOOP(n)
    {
        op = val[i][0];
        temp = 1;
        for (int j = 1; j <= m; j++)
        {
            temp &= val[i][j];
        }

        if (op == 1 && temp == 0)
        {
            ans = -1;
            break;
        }
        else if (op == 0 && temp == 1)
        {
            ans = 0;
        }
    }
    if (ans == -1)
    {
        cout << "INVALID\n";
    }
    else if (ans == 0)
    {
        cout << "WEAK\n";
    }
    else if (ans == 1)
    {
        cout << "FINE\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}