//GCD = Greatest Common Division
//LCM = Least Common Multiple

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, n1, n2, rem, gcd, lcm;
    cout << "Enter two integer numbers : ";
    cin >> num1 >> num2;

    n1 = num1;
    n2 = num2;

    while (n2!=0)
    {
        rem = n1 % n2;

        n1 = n2;
        n2 = rem;
    }

    gcd = n1;
    lcm = (num1 * num2) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm;

    return 0;
}
