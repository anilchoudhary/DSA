#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> input)
{
    set<int> s;
    vector<int> result;
    for(int i=0;i<input.size();i++)
    {
        if(s.find(input[i]) == s.end())
        {
            s.insert(input[i]);
            result.push_back(input[i]);
        }
    }
    return result;
}

int main()
{
    vector<int> input;
    input.push_back(105);
    input.push_back(106);
    input.push_back(111);
    input.push_back(114);
    input.push_back(105);
    input.push_back(135);
    input.push_back(138);
    input.push_back(111);
    input.push_back(147);
    input.push_back(114);
    vector<int> result;
    result = removeDuplicates(input);
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
}
