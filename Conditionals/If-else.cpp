#include <iostream>
using namespace std;
// int main(){
//   int n;
//   cout<<"Enter a number :";
//   cin>>n;
//   if(n%2==0) cout<<n<<" is an even number";
//   else cout<<n<<" is an odd number";
// }


int main(){
  int cp;
  cout<<"Enter Cost price :";
  cin>>cp;
  int sp;
  cout<<"Enter Selling price :";
  cin>>sp;
  if(sp<cp) cout<<"Loss of "<<cp-sp;
  else if (sp>cp) cout<<"Profit of "<<sp-cp;
  else (sp==cp) cout<<"Neither profit nor loss";
}