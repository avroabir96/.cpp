#include <iostream>
using namespace std;

int main()
{
    int num, temp, rem, sum=0;
    cout << "Enter any number : ";
    cin >> num;

    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if(sum == num)
    {
        cout << "This is armstrong number";
    }
    else
    {
        cout << "This is not armstrong number";
    }

    return 0;
}

