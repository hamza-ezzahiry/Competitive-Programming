/**
 *  *    author:  SpiderX
 *   **/
 
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>
#include <bitset>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b)	for(int i = a;i < b ;i++)
 

using namespace std;
 
typedef    unsigned long long ull;
typedef unsigned int uint;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int,int> pi;

int kadane(int tab[], int n)
{
    int ans,sum;
    ans = -9999;
    sum = 0;
    REP(i,0,n)
    {
        sum+= tab[i];
        ans = max(ans,sum);
        if(sum < 0) sum = 0;
    }
    return ans;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    while (cin >>n && n!= 0)
    {
        int tab[n];
        REP(i,0,n)
        {
            cin >>tab[i];
        }
        int k = kadane(tab,n);
        if(k > 0)
            cout <<"The maximum winning streak is "<<k<<".\n";
        else
            cout <<"Losing streak.\n";
    }
}
