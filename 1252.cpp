#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n = 0;
    bool judge;
    do
    {
        judge = true;
        n++;
        int n2 = n * n;
        int n3 = n * n * n;
        int count[10] = {0};
        do
        {
            count[n2 % 10]++;

        } while ((n2 /= 10) > 0);
        do
        {
            count[n3 % 10]++;

        } while ((n3 /= 10) > 0);
        for (int i = 0; i < 10; i++)
        {
            if (count[i] != 1)
            {
                judge = false;
            }
        }

    } while (!judge);
    cout << n;
    return 0;
}