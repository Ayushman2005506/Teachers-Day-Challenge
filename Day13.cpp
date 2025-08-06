#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = 0;
    for (char c : s)
    {
        if (c != '+')
            n++;
    }

    char arr[n];
    int i = 0;
    for (char c : s)
    {
        if (c != '+')
        {
            arr[i] = c;
            i++;
        }
    }

    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            cout << '+';
        }
        cout << arr[i];
    }

    return 0;
}
