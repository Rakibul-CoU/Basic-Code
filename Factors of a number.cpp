#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

/*....................................Values................................................*/
#define inf 1<<30
#define p5 100007
#define p6 1000007
#define PI acos(-1)
#define M 1000000007

/*....................................Functions.............................................*/
#define sqr(x) x*x
#define sc scanf
#define pf printf
#define scin(x) sc("%d",&(x))
#define scin2(x,y) sc("d",&(x),&(y))
#define scin3(x,y,z) sc("d%d",&(x),&(y),&(z))
#define scln(x) sc("%lld",&(x))
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define all(v) v.begin(), v.end()
#define ok cout << "ok" << endl
#define mem(x,y) memset(x,y,sizeof(x))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)

/*...................................Data_Types............................................*/
#define lli long long int
#define ull unsigned long long int
#define pii pair < int, int>
#define pll pair < ll, ll>
#define veci vector<int>
#define vecl vector<long long int>
#define vecp vector< pair<int,int> >
#define mapstrint map< string , int >
#define mapstrstr map< string , string >
#define mapint map< int, int >
#define uset unordered_set
#define umap unordered_map
#define pq priority_queue

#define pb push_back
#define mp make_pair
#define ss stringstream

/*.....................................Loops...............................................*/
#define rep( i , a , b ) for( i=a ; i<b ; i++)
#define rev( i , a , b ) for( i=a ; i>=b ; i--)
#define repx( i ,a,b, x) for( i=a ; i<b ; i+=x)

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0)

//int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
if(x==0) return y;
return gcd(y%x,x);
}*/
/*
int dx[5] = {1, -1, 0, 0 };
int dy[5] = {0, 0, 1, -1};
*/

using namespace std;
#define MAXN   1000001
int spf[MAXN];
void sieve()
{
    spf[1] = 1;
    int i, j;
    for(i=2; i<MAXN; i++)
        spf[i] = i;
    for(i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for(i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
int main()
{
    sieve();
    int x, cnt=0, i;
    cin>>x;
    vector <int> p = getFactorization(x);

    for (i=0; i<p.size(); i++)
    {
        if(p[i]!=p[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
