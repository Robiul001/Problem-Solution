#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1e+5
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define READ           freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

using namespace std;
typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  pair<int,int> 	       ii;
typedef  pair<string, int>     psi;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
typedef  vector< ii >          vii;
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp;
int arr[100000];
int dp[1000];
int two[1000][1000];
vector<int>vec;
stack<int>stk;
string str,st;

int check(int n)
{

}

int main()
{
  cin>>n>>a;
  cin>>str;
  while(a--)
  {
 for(i=0;i<str.size()-1;i++)
   {
     if(str[i]=='B' and str[i+1]=='G')
     {
       swap(str[i],str[i+1]);
       i++;
     }
   }
  }
 cout<<str<<endl;

    return 0;
}

