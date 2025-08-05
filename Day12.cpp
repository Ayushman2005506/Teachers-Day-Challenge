#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    
    for (char &char1 : s1)
    {
        char1 = tolower(char1);
        
    }
    for (char &char2 : s2)
    {
        char2 = tolower(char2);
      
    }

    if (s1 == s2)
    {
        cout << "0";
    }
    else if (s1 < s2)
    {
        cout << "-1";
    }

    else
    {
        cout << "1";
    }

    return 0;
}
