#include <iostream>
using namespace std;

int main()
{
    int num, count=0;

    cout << "Enter an integer number : ";
    cin >> num;

    while(num != 0)
    {
        num = num / 10;
        ++count;
    }

    cout << "Total number of digits : " << count;

    return 0;
}
