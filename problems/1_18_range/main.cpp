/* 
S. Interval
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output


Given a number X. Determine in which of the following intervals the number X belongs to:
[0,25], (25,50], (50,75], (75,100]

Note:
if X belongs to any of the above intervals print "Interval " followed by the interval.
if X does not belong to any of the above intervals print "Out of Intervals".
The symbol '(' represents greater than.
The symbol ')' represents smaller than.
The symbol '[' represents greater than or equal.
The symbol ']' represents smaller than or equal.
For example:

[0,25] indicates numbers between 0 and 25.0000, including both.

(25,50] indicates numbers greater than 25: (25.00001) up to 50.0000000.

Input
Only one line containing a number X ( - 1000 ≤ X ≤ 1000).

Output
Print the answer to the problem above.

Examples
inputCopy
25.1
outputCopy
Interval (25,50] 

*/

#include <iostream>




using namespace std;

int main()
{
    float x;

    cin >> x;

    if(x >= 0 && x <= 25)
    {
        cout << "Interval [0,25]"<<endl;
    }
    else if(x > 25 && x <= 50)
    {
        cout << "Interval (25,50]"<<endl;
    }
    else if(x > 50 && x <= 75)
    {
        cout << "Interval (50,75]"<<endl;
    }
    else if(x > 75 && x <= 100)
    {
        cout << "Interval (75,100]"<<endl;
    }
    else 
    {
        cout << "Out of Intervals"<<endl;
    }
    
    return 0;
}
