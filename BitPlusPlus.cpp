#include<string>
#include<vector>
#include<cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main(){

  int x=0, n;
  string stat;
  string x1="X++", x2="++X", x3="X--", x4="--X";
  vector <string> ve;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>stat;
    ve.push_back(stat);
  }
  for(int i=0; i < ve.size(); i++){
    if(ve.at(i)==x1){
        x++;
    }else if(ve.at(i)==x2){
        ++x;
    }else if(ve.at(i)==x3){
        x--;
    }else if(ve.at(i)==x4){
        --x;
    }
  }
  cout<<x;

  return 0;
}
//IbraMAINeem
