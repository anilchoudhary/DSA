#include<bits/stdc++.h>
using namespace std;

bool areSame(int ct[], int cp[])
{
    for(int i=0;i<256;i++)
    {
        if(ct[i]!=cp[i])
            return false;
    }
    return true;
}

bool isAnagram(string txt, string pat)
{
    int ct[256]={0};
    int cp[256]={0};
    for(int i=0;i<pat.length();i++)
    {
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for(int i=pat.length();i<txt.length();i++)
    {
        if(areSame(ct, cp))
            return true;
        ct[txt[i]]++;
        ct[txt[i-pat.length()]]--;
    }
    return false;
}

int main()
{
    string txt = "abcabcdef";
    string pat = "bcdf";
    if(isAnagram(txt,pat))
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
