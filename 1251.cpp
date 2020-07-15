#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int startTime[3], timing;

    while (cin >> startTime[0] >> startTime[1] >> startTime[2] >> timing)
    {
        while (timing--)
        {
            startTime[2]++;
            if (startTime[0] % 400 == 0 || startTime[0] % 4 == 0 && startTime[0] % 100 != 0)
            {
                monthDays[2] = 29;
            }
            else
            {
                monthDays[2] = 28;
            }

            if (startTime[2] > monthDays[startTime[1]])
            {
                startTime[2] -= monthDays[startTime[1]];
                startTime[1]++;
            }
            if (startTime[1] > 12)
            {
                startTime[1] -= 12;
                startTime[0]++;
            }
        }
        printf("%4d-%02d-%02d\n", startTime[0], startTime[1], startTime[2]);
    }
    return 0;
}