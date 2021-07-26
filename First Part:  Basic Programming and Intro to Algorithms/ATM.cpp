#include <iostream>

using namespace std;

int main() {
  int x;
  float y;
  cin>>x>>y;
  if ( x <= y && x % 5 == 0 ){
    y = y - float(x);
    y-=0.50;
  }
  cout<<y<<endl;
}
