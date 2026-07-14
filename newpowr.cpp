#include<iostream>
using namespace std;
int main(){

    int num , n ,  pow ;
    cout<< "Enter number :" ;
    cin>>n;
     num=n;
    cout<< "Enter power:" ;
    cin>>pow;

    num=n;
    for (int i = 1; i < pow; i+=1)
    {
        num=num*i;
    }
    cout<<num;

}