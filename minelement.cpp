// this code is used to find out minimum distance between 2 elements x and y

#include <bits/stdc++.h>
using namespace std;

int minDist(int a[], int n, int x, int y)
{
    // code here

    int i = 0;
    int j = 1;
    int k;
    int sum;
    int o = n;

    while (j < n)
    {

        if (a[i] == x && a[j] != y)
        {

            j++;
        }

        else if (a[i] == y && a[j] != x)
        {

            j++;
        }

        else if (a[i] == x && a[j] == y || a[i] == y && a[j] == x)
        {

            sum = j - i;
            if (o > sum)
            {

                o = sum;
            }

            i++;
            j = i+1;
        }

        else
        {

            i++;
            j++;
        }
    }

    if (o == n)
    {

        return -1;
    }

    return o;
}

int main()
{

    int arr[5] = {1,2,3,4,5};
    minDist(arr, 5, 6, 7);

    return 0;
}
