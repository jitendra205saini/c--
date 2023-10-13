#include<iostream>
using namespace std;

int main()
{    int n, i, j, k;
    cout << "enter value :- ";
    cin >> n;
    cout << "\n";
    k=(n+1)/2;
    
    for(i=1;i<=n;i++){
     for(j=1;j<=n;j++){
     if((j==1 &&  i>=2 && i<=n)||(i==n && j>=2)){
      cout << " *";}
      else if((i==k)&(j==k)){
       cout << " #";}
      else if((j==n && i>=1 && i<=n-1)||(i==1 && j>= 1 )){
        cout << " $";}
      else{
        cout << "  ";}}
      
      cout << "\n";}
    return 0;
}