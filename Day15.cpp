#include <iostream>
#include <set>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> new_set;

    for (char c : s)
    {
        new_set.insert(c);
    }

    if (new_set.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }

    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
