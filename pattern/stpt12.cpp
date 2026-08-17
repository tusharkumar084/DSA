#include<iostream>
using namespace std;
int main(){
    int row , col;
    for (int row = 1; row <=5; row+=1)
    {
        for (int col = row ; col >=1; col-=1)
        {
           cout<<col<<" ";
           
        }
        cout<<endl;
        
    }
    
}
/*1 
  2 1 
  3 2 1 
  4 3 2 1 
  5 4 3 2 1*/