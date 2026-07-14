#include<iostream>
using namespace std;
int main(){
    int n , fact , i;
    cout<<"Enter factorial :";
    cin>>n;
    fact=1;
    for (int i = 1; i <=n; i=i+1)
    {
        fact=fact*i;
    }
    cout<<fact;
}