#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;

    
    while (cin >> n)
    {
        bool hasSolution = false;
        for (int a = 1; a * a <= n; a++)
        for (int b = a; a * a + b * b <= n; b++)
            for (int c = b; a * a + b * b + c * c <= n; c++)
                if (a * a + b * b + c * c == n) {
                    hasSolution = true;
                    cout << a << ' ' << b << ' ' << c << endl;
                }

        if (!hasSolution)
        {
            printf("No Solution\n");
        }
    }

    return 0;
}