#include <iostream>

using namespace std;

int main() {
  int s = 0;
  int n;
  cout<<"How many numbers will you enter?"<<endl;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cout<<"Enter the "<<i<<"th number?"<<endl;
    cin>>arr[i];
    s+=arr[i];
  }
  cout<<s<<endl;
}
