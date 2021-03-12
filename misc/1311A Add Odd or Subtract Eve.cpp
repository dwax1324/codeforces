// #author <dwax1324>		#date <Sat Mar 13 05:24:05 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

  int a,b;
  cin >> a >> b;
  if(a==b) cout << 0;
  else if(a < b){
      if((b-a) %2 ==1) cout << 1;
      else cout << 2;
  }else{
      if((a-b) %2 ==0) cout << 1;
      else cout << 2;
  }  
  cout << '\n';

}
}