#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
#define aLL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXISt(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define MAX 100000000
#define pb push_back
using namespace std; 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};
 
int sttoi(std::string str){int ret;std::stringstream ss;ss << str;ss >> ret;return ret;}
 
int main(){
  int n;
  double a,b;
  cin >> n >> a >> b;
  double d[n];
  rep(i,n)cin >> d[i];
 
  double maxi = -1,mini = 10000000000;
 
  rep(i,n){
 
    maxi = max(maxi,d[i]);
    mini = min(mini,d[i]);
 
  }
  double p;
 
  if(maxi - mini != 0){
 
    p = b/(maxi-mini);
 
  }else{
 
    P(-1);
    return 0;
 
  }
  double heikin = 0;
  rep(i,n){
 
    heikin += d[i];
 
  }
  heikin /= n;
  double q = a - p*heikin;
  cout << setprecision(6) << fixed << p << " " << q << endl;
  return 0;
}
