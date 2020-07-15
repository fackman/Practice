#include <iostream>
#include <cstdio>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    string str = "aaabbbbccccc";
    vector<string> vec;
    int sum = 0;
    vec.clear();

    do
    {
        vector<string>::iterator it;
        for (it = vec.begin();it != vec.end(); it++)
        {
            if ((*it).find(str,0) != string::npos)
            {
                break;
            }
            
        }
        if (it != vec.end())
        {
            continue;
        }
        sum++;
        string str2 = str + str;
        vec.push_back(str2);
        reverse(str2.begin(),str2.end());
        vec.push_back(str2);
        
    } while (next_permutation(str.begin(),str.end()));
    
    cout<<sum<<endl;
    return 0;
}