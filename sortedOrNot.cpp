#include <bits/stdc++.h>
using namespace std;

bool sortedOrNot(vector<int> arr, int index)
{

    // base case

    if (index >= arr.size())
    {

        return true;
    }

    if (arr[index] < arr[index - 1])
    {

        return false;
    }

    return sortedOrNot(arr, index + 1);
}

int main()
{

    vector<int> arr = {1, 11, 5, 7, 9};

    sortedOrNot(arr, 1);

    if (sortedOrNot(arr, 1))
    {

        cout << "true";
    }

    else
    {

        cout << "nopes";
    }

    return 0;
}