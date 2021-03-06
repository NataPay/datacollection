#include <iostream>
#include <cstdio>
#include <stack>
#include <cstring>
#include <queue>
#include <algorithm>
#include <cmath>
//#include <unordered_map>
#define N 30100
using namespace std;
typedef pair<int,int> PII;
const int INF=0x3f3f3f3f;
void Open()
{
    //#ifndef ONLINE_JUDGE
        freopen("C-small-attempt2.in","r",stdin);
        freopen("C-small-attempt2.out","w",stdout);
    //#endif // ONLINE_JUDGE
}
char ijk[N];
char tmp[N];
char mul[200][200];
bool minu[200][200];
int main()
{
    Open();
    mul['1']['1']='1',mul['1']['i']='i',mul['1']['j']='j',mul['1']['k']='k';
    mul['i']['1']='i',mul['i']['i']='1',mul['i']['j']='k',mul['i']['k']='j';
    mul['j']['1']='j',mul['j']['i']='k',mul['j']['j']='1',mul['j']['k']='i';
    mul['k']['1']='k',mul['k']['i']='j',mul['k']['j']='i',mul['k']['k']='1';
    minu['i']['i']=1,minu['i']['k']=1,minu['j']['i']=1,minu['j']['j']=1,minu['k']['j']=1,minu['k']['k']=1;
    int T;
    scanf("%d",&T);
    int cas=1;
    while(T--)
    {
        memset(ijk,0,sizeof(ijk));
        memset(tmp,0,sizeof(tmp));
        int l,x;
        scanf("%d%d",&l,&x);
        int tmpx=x;
        if(x>4){
            x%=4;
            x+=4;
        }
        //x= x % 4 + x>=4?4:0;
        scanf("%s",tmp);
        for(int i=0;i<x;i++)
            strcat(ijk,tmp);
        //cout<<ijk<<endl;
        int len=strlen(ijk);
        bool fuhao=0;
        char pre='1';
        //cout<<"debug:"<<minu['k']['k']<<endl;
        for(int i=0;i<len;i++)
        {
            //cout<<"1:pre,ikj,pre,fuhao:"<< pre<<" "<<ijk[i]<<","<<minu[pre][ijk[i]]<<" "<<fuhao<<endl;
            fuhao = fuhao ^ minu[pre][ijk[i]];
            //cout<<"2:pre,ikj,pre,fuhao:"<< pre<<" "<<ijk[i]<<","<<minu[pre][ijk[i]]<<" "<<fuhao<<endl;
            pre=mul[pre][ijk[i]];
            //cout<<"3:pre,fuhao:"<<pre<<" "<<fuhao<<endl;
        }
        if(pre != '1' || !fuhao)
        {
            printf("Case #%d: NO\n",cas++);
            continue;
        }
        fuhao=0;
        pre='1';
        int iidx=-1;
        int kidx=-1;
        for(int i=0;i<len;i++)
        {
            //cout<<"1:pre,ikj,pre,fuhao:"<< pre<<" "<<ijk[i]<<","<<minu[pre][ijk[i]]<<" "<<fuhao<<endl;
            fuhao^=minu[pre][ijk[i]];
            pre=mul[pre][ijk[i]];
            //cout<<"2:pre,ikj,pre,fuhao:"<< pre<<" "<<ijk[i]<<","<<minu[pre][ijk[i]]<<" "<<fuhao<<endl;
            if(pre=='i' && !fuhao)
            {
                iidx=i;
                //cout<<"iidx:"<<iidx<<endl;
                break;
            }
        }
        pre='1';
        fuhao=0;
        for(int i=len-1;i>=0;i--)
        {
            fuhao^=minu[ijk[i]][pre];
            pre=mul[ijk[i]][pre];
            if(pre=='k' && !fuhao)
            {
                kidx=i;
                //cout<<"kidx:"<<kidx<<endl;
                break;
            }
        }
        if(iidx!=-1 && kidx!=-1 && iidx+1<kidx+(l*tmpx-len))
            printf("Case #%d: YES\n",cas++);
        else
            printf("Case #%d: NO\n",cas++);
        //cout<<endl;
    }
    return 0;
}
