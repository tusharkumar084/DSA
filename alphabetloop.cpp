#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter your last alphabet:";
    cin>>c;
    for (char i = 'a'; i <= c ; i=i+1)
    {
        cout<< i <<" ";
    }
    
}