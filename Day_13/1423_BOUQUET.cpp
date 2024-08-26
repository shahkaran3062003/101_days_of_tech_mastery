// #include <bits/stdc++.h>

// using namespace std;
// #define int long long int
// #define F first
// #define S second
// #define pb push_back
// #define si set<int>
// #define vi vector<int>
// #define vii vector<vi>
// #define pii pair<int, int>
// #define vpi vector<pii>
// #define vpp vector < pair<int, pii>
// #define mii map<int, int>
// #define spi set<pii>
// #define endl "\n"
// #define sz(x) (int() x.size())
// #define all(p) p.begin(), p.end()
// #define double long double
// #define que_max priority_queue<int>
// #define que_min priority_queue<int, vi, greater<int>>
// #define LOOP(n) for (int i = 0; i < n; i++)
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define but(...) __f(#__VA_ARGS__, __VA_ARGS__)
// #define print(a)          \
//     for (auto x : a)      \
//         cout << x << " "; \
//     cout << endl
// #define print1(a)    \
//     for (auto x : a) \
//     cout << x.F << " " << x.S << endl
// #define print2(a, x, y)         \
//     for (int i = x; i < y; i++) \
//         cout << a[i] << " ";    \
//     cout << endl

// inline int power(int a, int b)
// {
//     int x = 1;
//     while (b)
//     {
//         if (b & 1)
//             x *= a;
//         a *= a;
//         b >>= 1;
//     }
//     return x;
// }

// template <typename Arg1>
// void __f(const char *name, Arg1 &&arg1) { cout << name << ':' << arg1 << endl; }
// template <typename Arg1, typename... Args>
// void __f(const char *names, Arg1 &&arg1, Args &&...args)
// {
//     const char *comma = strchr(names + 1, ',');
//     cout.write(names, comma - names) << " : " << arg1 << " | ";
//     __f(comma + 1, args...);
// }

// const int N = 200005;
// void solve()
// {
//     int arr[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int max1 = 0, max2 = 0, temp1, temp2;
//     int ans;
//     for (int i = 0; i < 3; i++)
//     {
//         temp1 = arr[i][0] + arr[i][1] + arr[i][2];
//         temp2 = arr[0][i] + arr[1][i] + arr[2][i];

//         max1 = temp1 > max1 ? temp1 : max1;
//         max2 = temp2 > max2 ? temp2 : max2;
//     }

//     ans = max1 > max2 ? max1 : max2;

//     if (ans == 0 || ans & 1)
//     {
//         cout << ans << endl;
//     }
//     else
//     {
//         cout << ans - 1 << endl;
//     }
// }

// int32_t main()
// {
// #ifndef ONLINE_JUDGE
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     clock_t z = clock();

//     int t = 1;
//     cin >> t;
//     while (t--)
//         solve();

//     cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

//     return 0;
// }

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
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}