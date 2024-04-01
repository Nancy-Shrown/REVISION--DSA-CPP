#include <iostream>
using namespace std;

int main() 
{
    int j;
    while (j <= 10)      //// NO OUTPUT BECAUSE THE VALUE OF J IS NOT DECLARED OR INITIALISED
    {
        cout << j << endl;
        j = j + 1;
    }
    return 0;
}

