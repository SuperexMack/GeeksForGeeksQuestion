#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[4][4];

    int sum = 0;
    int sum2 = 0;
    int j = 0;

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < 4; i++)
    {

        for (int l = j; l < 4; l++)
        {

            sum = sum + arr[i][l];
        }

        j++;
    }

    cout<<sum<<endl;

    int m = 0;

    

    for (int i = 0; i < 4; i++)
    {

        for(int j = 0 ; j<=m ; j++){
            
            
            sum2 = sum2 + arr[i][j];
            
            
        }

        m++;
    }
     
     cout<<sum2;

// 6 5 4 1 2 5 7 9 7
}