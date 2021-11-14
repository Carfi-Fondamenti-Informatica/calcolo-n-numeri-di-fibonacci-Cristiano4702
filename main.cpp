#include <iostream>
using namespace std;

int main() {
    int n, a=1, b=1, c;
    cin >> n;

    if(n>=2)
    {
        cout << a << endl;
        cout << b << endl;
        for(int i=2; i<n; i++)
        {
            c = a+b;
            cout << c << endl;
            a=b;
            b=c;
        }
    }
    else
    {
        cout << "errore" << endl;
    }
   return 0;
}
