#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> v(7);
int s[] = {0, 4, 5, 6, 1, 2, 3};
int c, sum = 0;
bool isMutex = false;

void dfs(int m, int count)
{
    if (count > c)
    {
        return;
    }
    if (count == c)
    {
        sum+=4;
    }

    for (int i = 1; i <= 6; i++)
    {
        vector<int>::iterator it;
        for (it = v[s[m]].begin(); it != v[s[m]].end(); it++)
        {
            if (i == *it)
            {
                isMutex = true;
            }
        }
        if (isMutex)
        {
            break;
        }

        dfs(i, count + 1);
    }
}

int main()
{
    int n;
    cin >> c >> n;
    int arr[2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[0] >> arr[1];
        v[arr[0]].push_back(arr[1]);
        v[arr[1]].push_back(arr[0]);
    }
    dfs(0, 0);
    cout<<sum<<endl;
    return 0;
}