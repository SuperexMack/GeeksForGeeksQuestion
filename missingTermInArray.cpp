#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &array, int n)
    {
        // Your code goes here

        sort(array.begin(), array.end());

        int i = 1;
        int d;

        if (array[0] != 1)
        {

            return 1;
        }

        while (i < n)
        {

            if (array[i] - array[i - 1] > 1 || array[i] - array[i - 1] < 0)
            {

                d = array[i - 1] + 1;

                return d;
            }

            i++;
        }
    }

}