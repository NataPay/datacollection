#include <bits/stdc++.h>
using namespace std;
struct outfit{
    int j,s,p;
};
int main(){
    int t;
    ifstream infile;
    ofstream outfile;
	infile.open("C-small-attempt0.in");
    outfile.open("C-output.out");
    infile>>t;
    for(int tk=1;tk<=t;tk++){
        int oc=0,mc=0;
        int j,p,s,k;
        infile>>j>>p>>s>>k;
        vector<outfit> ans;
        for(int jc=1;jc<=j;jc++){
            for(int pc =1;pc <= p;pc++){
                for(int sc=k*mc; sc < k*mc + k && sc < s;sc++){
                    outfit temp;
                    temp.j = jc;
                    temp.p = pc;
                    temp.s = sc+1;
                        ans.push_back(temp);
                }
                oc++;
                if(oc == k){
                    oc = 0;
                    mc++;
                }
            }
        }
        outfile<<"Case #"<<tk<<": ";
        outfile<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            outfile<<ans[i].j<<" "<<ans[i].p<<" "<<ans[i].s<<endl;
        }
        outfile<<endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
