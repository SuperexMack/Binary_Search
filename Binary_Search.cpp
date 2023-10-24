#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int k)
{

    int start = 0;
    int end = size - 1;

    // int mid = (end-start) / 2;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == k)
        {

            return mid;
        }

        if (arr[mid] < k)
        {

            start = mid + 1;
        }

        else if (arr[mid] > k)
        {

            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int size;
    cout << "ENTER THE SIZE OF THE ARRAY" << endl;

    cin >> size;

    int arr[size];

    cout << "ENTER THE ELEMENTS INSIDE THE ARRAY" << endl;

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    int findout;

    cout << "ENTER THE VALUE OF ELEMENT WHOSE INDEX YOU WANT TO FIND" << endl;

    cin >> findout;

    int c = binarySearch(arr, size, findout);

    cout << c;

    return 0;
}