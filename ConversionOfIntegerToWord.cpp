#include <bits/stdc++.h>
using namespace std;

void toString(int n, string str[])
{

    // 456

    // base condition

    if (n == 0)
    {

        return;
    }

    toString(n / 10, str);
    cout << str[n % 10] << " ";
    
}

int main()
{

    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout << "Enter the value of n";
    cin >> n;

    toString(n, str);

    return 0;
}