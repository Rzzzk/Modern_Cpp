#include <iostream>
#include <string>

using namespace std;

int main()
{
    string f1, s1, f2, s2;

    cin >> f1 >> s1 ;
    cin >> f2 >> s2;

    if(s1 == s2)
    {
        cout << "ARE Brothers\n" ;
    }
    else
    {
        cout << "NOT\n" ;
    }
    
    return 0;
}
