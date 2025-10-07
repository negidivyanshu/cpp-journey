#include <iostream>
using namespace std;
// int main(){
//   int n;
//   cout<<"Enter a number :";
//   cin>>n;
//   if(n%2==0) cout<<n<<" is an even number";
//   else cout<<n<<" is an odd number";
// }

// 3 digit or not
int main(){
  int n;
  cout<<"Enter a number :";
  cin>>n;
  if(n>99 && n<1000) { 
    cout<<n<<" is a 3 digit number";
  }
  else cout<<n<<" is not a 3 digit number";
}