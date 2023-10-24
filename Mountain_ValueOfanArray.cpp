// Not user Friendly


#include <bits/stdc++.h>
using namespace std;

int moutntain(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
        {

            start = mid + 1;
        }

        else
        {

            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return arr[end];
}

int main()
{

    int arr[4] = {67, 2, 34, 655};

    int peak = moutntain(arr, 4);

    cout << "THE MOUNTAIN VALUE IS :" << peak;

    return 0;
}