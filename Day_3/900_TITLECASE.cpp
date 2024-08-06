// https://www.codechef.com/practice/course/strings/STRINGS/problems/TITLECASE

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

bool isUpper(char ch)
{
    return (ch >= 'A' && ch <= 'Z');
}

bool isLower(char ch)
{
    return (ch >= 'a' && ch <= 'z');
}

bool isCap(string str)
{
    bool isCap = true;
    LOOP(str.length())
    {
        if (isLower(str[i]))
        {
            return false;
        }
    }
    return true;
}

char toUpper(char ch)
{
    return ch - 32;
}

char toLower(char ch)
{
    return ch + 32;
}

void solve()
{
    string str, temp;
    getline(cin >> ws, str);
    vector<string> wordList;
    temp = "";
    LOOP(str.length())
    {
        if (str[i] == ' ')
        {
            wordList.pb(temp);
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }
    wordList.pb(temp);

    // for (int i = 0; i < wordList.size(); i++)
    // {
    //     cout << wordList[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < wordList.size(); i++)
    {
        if (!isCap(wordList[i]))
        {

            if (isLower(wordList[i][0]))
            {
                wordList[i][0] = toUpper(wordList[i][0]);
            }
            for (int j = 1; j < wordList[i].length(); j++)
            {
                if (isUpper(wordList[i][j]))
                {
                    wordList[i][j] = tolower(wordList[i][j]);
                }
            }
        }
    }

    for (string s : wordList)
    {
        cout << s << " ";
    }
    cout << "\n";
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
    cin >> t;
    while (t--)
        solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}
