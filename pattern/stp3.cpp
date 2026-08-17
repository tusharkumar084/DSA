#include<iostream>
using namespace std;
int main (){
    int row , col;
    for (int row = 1; row <= 5; row+=1)
    {
        for (int col = 1; col <= 5; col+=1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
}
/*1 2 3 4 5 
  1 2 3 4 5 
  1 2 3 4 5 
  1 2 3 4 5 
  1 2 3 4 5*/