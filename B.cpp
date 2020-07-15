#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

struct s
{
    int date;
    int id;
    float temp;
};

bool compare(s m, s n)
{
    if (m.date != n.date)
        return m.date > n.date;
    if (m.temp != n.temp)
        return m.temp > n.temp;
    return m.id < n.id;
}

int main()
{
    int c, needNotice = 0;
    cin >> c;

    vector<s> v;

    for (int i = 0; i < c; i++)
    {
        s st;
        cin >> st.date >> st.id >> st.temp;
        if (st.temp >= 38.0)
        {
            needNotice++;
            v.push_back(st);
        }

        
    }
    sort(v.begin(), v.end(), compare);

    cout << needNotice << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].date << " " << v[i].id << " " << setiosflags(ios::fixed) << setprecision(1) << v[i].temp << endl;
    }

    return 0;
}
