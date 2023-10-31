class Solution
{
public:
    void pushZerosToEnd(int arr[], int n)
    {
        // code here

        int a = 0;
        int b = 0;

        while (b < n)
        {

            if (arr[b] != 0)
            {

                swap(arr[a], arr[b]);

                a++;
                b++;
            }

            else
            {

                b++;
            }
        }
    }
};