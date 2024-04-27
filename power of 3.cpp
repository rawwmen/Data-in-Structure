//check if the number is sum of powers of 3. 
#include <iostream>
using namespace std;
#include<math.h>  
int main()
{

    int b = 81;
    int a = 3;
    // computing power
    double p = log10(b) / log10(a);
    // checking to see if power is an integer or not
    if (p - (int)p == 0) {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
