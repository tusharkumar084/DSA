#include<iostream>
using namespace std;
int main(){

    int num , n , i , pow ;
    cout<< "Enter number :" ;
    cin>>n;
    cout<< "Enter power:" ;
    cin>>pow;

    num=n;
    for (int i = 1; i < pow ; i+=1)
    {
        num=num*i;
    }
    cout<<num;

}