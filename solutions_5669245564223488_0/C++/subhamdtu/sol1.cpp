#include<bits/stdc++.h>
#define s(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define p(n) printf("%d\n",n)
#define mod 1000000007
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
if(a%b==0)
return b;
else
return gcd(b,a%b);
}
int main()
{

vector<int>v[101];
    int fre1[101][27];
    int t,k,i,f,j,len,ans;
    char ch;
    int p,q,tmp,tmp1;
    freopen("abc.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    cin>>t;

    for(k=1;k<=t;++k)
    {
    char str[101][101];
        ans=0;

        int n;
        int a[11];
         int f1=1;

         cin>>n;

         for(i=1;i<=n;++i)
         {
         v[i].clear();
         for(j=1;j<=26;++j)
         {
         fre1[i][j]=0;
         }
         }
         for(i=1;i<=n;++i)
        a[i]=i;
         for(i=1;i<=n;++i)
         {
           cin>>str[i];
         }
         for(i=1;i<=n;++i)
         {
         for(j=0;j<strlen(str[i]);++j)
         {
         tmp=(int)str[i][j]-96;
         if(fre1[i][tmp]==0)
         {
         fre1[i][tmp]++;
         v[i].push_back(tmp);
         }
         else{
         if(str[i][j]!=str[i][j-1])
         {
         f1=0;
         break;
         }
         }
         }
         }
         int fre[27];


         cout<<"Case #"<<k<<": ";

         if(f1==1)
         {

         do
         {

         memset(fre,0,sizeof(fre));
         int f=1;
          vector<int>:: iterator it;
          for(it=v[a[1]].begin();it!=v[a[1]].end();++it)
          {
          fre[*it]=1;
          }
          for(i=2;i<=n;++i)
          {
          int ct=0;
          for(it=v[a[i]].begin();it!=v[a[i]].end();++it)
          {
          if(fre[*it]==1)
          {
          ct++;
          }
          }
          if(ct>=2)
          {

          f=0;
          break;
          }
          else if(ct==1)
          {

           if(str[a[i]][0]!=str[a[i-1]][strlen(str[a[i-1]])-1])
           {


           f=0;
           break;
           }
          }
          for(it=v[a[i]].begin();it!=v[a[i]].end();++it)
          {
          fre[*it]=1;
          }

          }
          if(f)
          {

          ans++;
          }
         }while(next_permutation(a+1,a+n+1));
         }
          cout<<ans<<endl;





    }
return 0;
}
