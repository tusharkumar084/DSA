#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the desired num:";
    cin>>n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = n-(row-1); col >=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
}
/*   5 4 3 2 1 
     4 3 2 1 
     3 2 1 
     2 1 
     1          */