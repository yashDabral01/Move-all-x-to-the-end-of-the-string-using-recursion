#include<bits/stdc++.h>
using namespace std;
string moveAllX(string s){
   if(s.length()==0){
     return "";
   }
   string ans = moveAllX(s.substr(1));
   if(s[0]=='x'){
     return ans + s[0];
   }
   else{
    return s[0]+ans;
   }
}
int main(){
    string str = moveAllX("axxbdxecefxhix");
    cout<<str<<endl;
    return 0;
}