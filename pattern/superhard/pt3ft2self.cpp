#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the num. of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 5 - (i - 1); j++)
        {
            cout << "*";
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/* *********
    *******
     *****
      ***
       *   */