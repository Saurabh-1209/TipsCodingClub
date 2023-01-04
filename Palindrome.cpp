#include <iostream>
using namespace std;
bool palindrome(int);
int main()
{
    int x{};
    cin >> x;
    palindrome(x);
    if (palindrome(x))
        cout << "True";
    else
        cout << "false";
    return 0;
}
bool palindrome(int x)
{
    int a{}, temp{}, temp2{};
    temp = x;
    while (x > 0)
    {
        a = x % 10;
        temp2 = temp2 * 10 + a;
        x = x / 10;
    }
    if (temp == temp2)
        return true;
    else
        return false;
}