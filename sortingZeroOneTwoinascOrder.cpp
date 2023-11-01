#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    // code here

    int l = 0;
    int j = 0;

    while (j < n)
    {

        if (a[j] == 0 || a[l] == 0)
        {

            swap(a[l], a[j]);
            l++;
            j++;
        }

        else
        {

            j++;
        }
    }

    int k = 0;
    int m = 0;

    while (m < n)
    {

        if (a[m] != 2)
        {

            swap(a[k], a[m]);
            k++;
            m++;
        }

        else
        {

            m++;
        }
    }

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}

int main()
{

    int a[] = {2, 0, 2, 0, 0, 1, 2, 2, 2, 1, 1, 0, 1, 1, 1, 2, 0, 1, 2, 1, 0};

    sort012(a, 21);
}
