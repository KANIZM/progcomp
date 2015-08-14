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
#define MaX 100000000
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
  int a = 0,b = 0,c = 0,d = 0;
  string s,t;
  cin >> s;
  int n;
  cin >> n;
  cin >> t;
  for(int i = 0;i < 3;i++){
    if(s[i] == 'x'){
      b++;
    }else{
      a++;
    }
    if(t[i] == 'x'){
      d++;
    }else{
      c++;
    }
  }
  if(a != c){
    P("SUCCESS");
    return 0;
  }
  if(n == 0){
    if(s == t){
      P("FAILURE");
      return 0;
    }else{
      P("SUCCESS");
      return 0;
    }
  }else if(n == 1){
    string x = "",y = "";
    x = x + s[1] + s[0] + s[2];
    y = x + s[0] + s[2] + s[1];
    if(x == t || y == t){
      P("FAILURE");
      return 0;
    }else{
      P("SUCCESS");
      return 0;
    }
  }else{
    P("FAILURE");
    return 0;
  }
}
