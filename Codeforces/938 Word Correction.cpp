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
#define READ          freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

using namespace std;

typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
int n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0;
int arr[100000];
int dp[1000];
int two[1000][1000];
string str,st;

int check(char ch)
{
  if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='y')
     return 1;
  else
     return 0;
}

int main()
{
  cin>>n;getchar();
   getline(cin,str);
    for(i=0;i<n;i++)
    {
      if(check(str[i]) && check(str[i+1]))
      {
         str.erase(str.begin()+(i+1)) ;
         if(check(str[i+1]))
         {
             i--;
         }
      }
    }
  cout<<str;
    return 0;
}

