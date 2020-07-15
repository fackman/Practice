#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int sum,count;

    while (cin>>sum)
    {
          count = sum;

    while (count >= 3)
    {
        sum += count/3;
        count = count % 3 + count / 3; 
    }
    cout<<sum<<endl;
    }
    
  
    return 0;
}