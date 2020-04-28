#include<bits/stdc++.h>
using namespace std;

char nonRepeatingCharacter(string str)
{
    map<char, int> frequency;

    for (int i = 0; i < str.length(); i++)
    {
        char currentChar = str[i];
        frequency[currentChar]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (frequency[str[i]] == 1)
            return str[i];
    }
    return str[0];
}

int main()
{
    string str = "adHahdbc";
    char answer = nonRepeatingCharacter(str);
    cout << answer;
    return 1;
}
