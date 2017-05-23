/********************************************
*                                           *
*    Solved By : Bir Bahadur Khatri(B'ru)   *
*      Be Positive,be Happy.                *
*                                           *
*********************************************/

#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#include<bits/stdc++.h>
#define ULL unsigned LL
#define PI 2.0*acos(0.0)
#define MP make_pair
#define LL long long int
#define S1(a) a=in<int>()
#define SL1(a) a=in<LL>()
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define all(a) a.begin(),a.end()
#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))
#define SL2(a,b) a=in<LL>(),b=in<LL>()
#define F(i,a,b) for(int i=a;i<b; i++)
#define S2(a,b) a=in<int>(),b=in<int>()
#define R(i,a,b) for(int i=a-1;i>=b; i--)
#define BitCnt(a) __builtin_popcountll(a)
#define MEM(a,val) memset(a,val,sizeof(a))
#define SL3(a,b,c) a=in<LL>(),b=in<LL>(),c=in<LL>()
#define S3(a,b,c) a=in<int>(),b=in<int>(),c=in<int>()
#define cp printf("***** here here here here *****\n");
#define trace1(x)                cerr << #x << ": " << x << endl;
#define InpOut freopen("A.in","r",stdin),freopen("A1.out","w",stdout)
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;

using namespace std;
template <typename T> T in(){char ch;T n = 0;bool ng = false;while (1){ch = getchar();if (ch == '-'){ng = true;ch = getchar();break;}if (ch>='0' && ch<='9')     break;}while (1){n = n*10 + (ch - '0');ch = getchar();if (ch<'0' || ch>'9')   break;}return (ng?-n:n);}
template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
template<typename T>inline T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template<typename T>inline T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
long long Bigmod(long long base, long long power, long long MOD){long long ret=1;while(power){if(power & 1)ret=(ret*base)%MOD;base=(base*base)%MOD;power>>=1;}return ret;}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
long long ModInverse(long long number, long long MOD){return Bigmod(number, MOD-2, MOD);}
bool isConst(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }

///**********************************************************//

#define MD1 1000000007ULL
#define MD2 1000000009ULL
#define MD3 1000000021ULL
#define BS1 10000019ULL
#define BS2 10000079ULL
#define BS3 10000103ULL
#define PUL pair<ULL,ULL>

///         0123456789
#define MX  500007
#define MOD 1000000007
#define INF 2000000000
#define EPS 1e-9
/// ==========================================////

string S[]={"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

int vis[1002];

int IsPossible(int id) {
    string s=S[id];
    for(int i=0;i<s.sz;i++) {
        if( vis[ s[i]-'A' ] ) {
            vis[ s[i]-'A' ]--;
        }
        else {
            for(int j=0;j<i;j++) {
                vis[ s[j]-'A' ]++;
            }
            return 0;
        }
    }
    return 1;
}

int main()
{
    freopen("A.in","r",stdin),freopen("A1.out","w",stdout);

    int t;
    S1(t);

    vector< char> v;
    v.PB('0');
    v.PB('Z');

    v.PB('2');
    v.PB('W');

    v.PB('4');
    v.PB('U');

    v.PB('6');
    v.PB('X');

    v.PB('8');
    v.PB('G');

    v.PB('5');
    v.PB('V');

    v.PB('3');
    v.PB('H');

    v.PB('7');
    v.PB('S');

    v.PB('9');
    v.PB('I');

    for(int cs=1;cs<=t;cs++) {
        string s;
        cin>>s;
        MEM(vis,0);

        int n=s.sz;

        F(i,0,n)
        {
            vis[ s[i]-'A' ]++;
        }
        string ans;

        for(int i=0;i<v.sz;i+=2) {
            char x=v[i],y=v[i+1];
            //trace2(x,y);
            while(IsPossible( x-'0' )) {
                ans+=x;
            }

        }

        while(IsPossible(1)) {
            ans+='1';
        }

//        F(i,0,100)
//        {
//            if(vis[i]) {
//                trace1(s);
//                break;
//            }
//        }

        sort(all(ans));
        printf("Case #%d: ",cs);
        cout<<ans<<endl;
    }

    return 0;
}