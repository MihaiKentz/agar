#include <iostream>
#include <algorithm>
using namespace std;

int test(int pi[], int a, int b)
{
    int test[100000];
    for(int i=a; i<=b; i++)
        test[i]=pi[i];
    sort(test+a, test+b+1);
    for(int i=a; i<b; i++)
    {
        if(test[i+1]>test[i]*2) return 0;
    }
    return 1;
}

int main()
{
    int n, m, i, pi[100000], j, a, b, nr;
    bool rasp[5000];
    cin>>n;//microbi
    cin>>m;//scenarii
    for(i=0; i<n; i++)
        cin>>pi[i];

    for(j=1; j<=m; j++)
    {
        //nr=0;
        cin>>a>>b;
        //if(b<a) swap(a, b);
        if(test(pi, a, b))
            rasp[j]=1;
        else rasp[j]=0;
        /**for(i=a; i<b; i++)
        {
            for(int k=i+1; k<=b; k++)
                if((pi[i]>=pi[k] && pi[i]<=pi[k]*2) or(pi[k]>=pi[i] && pi[k]<=pi[i]*2))
                {
                    nr++;
                    //break;
                }
            if(nr>=b-a) rasp[j]=1;
            else rasp[j]=0;
        }*/

    }
    for(j=1; j<=m; j++)
        if(rasp[j]==1) cout<<"DA"<<endl;
        else cout<<"NU"<<endl;
}
