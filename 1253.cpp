#include <iostream>
#include <cstdio>

using namespace std;

long long cnt = 0;

void dfs(int point, int sum)
{
    if (sum == 13)
    {
        cnt++;
        return;
    }
    if (point >= 13 || sum > 13)
    {
        return;
    }

    for (int i = 0; i < 5; i++)
    {
        dfs(point + 1, sum + i);
    }
}

int main()
{
    dfs(0, 0);
    cout << cnt;
    return 0;
}
