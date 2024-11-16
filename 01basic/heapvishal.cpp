#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {34, 6, 67, 897, 3, 21, 4};

    make_heap(arr.begin(), arr.end());
    int n = arr.size();
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
        cout << arr[i] << " ";

    cout << endl;

    make_heap(arr.begin(), arr.end(), greater<int>());

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}