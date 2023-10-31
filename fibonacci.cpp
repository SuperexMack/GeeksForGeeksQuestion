// finding the nth fibonacci number

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i = 0;
    int j = 1;
    int sum = 0;
    int n = 7;
    int k = 0;

    // 0 0 1 2 3 5 8

    while (k < n - 1)
    {

        sum = j + i;

        i = j;
        j = sum;
        k++;
    }

    cout << sum;
}
