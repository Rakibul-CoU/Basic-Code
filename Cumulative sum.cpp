#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
using namespace std;
int cumul(int tab[], int length, int ind) {

    if (ind > 0) {
        tab[ind] += tab[ind-1];
    }
    if (ind < length) {
        cumul(tab, length, ind+1);
    }
    return 0;
}

int main() {
    int ind;
    int tab[1000];
    int i, j, k, l, n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>tab[i];
    }
    //int length = sizeof(tab)/sizeof(tab[0]);
    int length=n;
    sort(tab, tab+n);

    for (ind = 0; ind < length; ind++) {
        printf("%d ", tab[ind]);
    }
    printf("\n");

    cumul(tab, length, 0);

    for (ind = 0; ind < length; ind++) {
    printf("%d ", tab[ind]);
    }
    printf("\n");
    return 0;
}
