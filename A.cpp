#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    int result = arr[3]+arr[0]-arr[1]-arr[2];
    result = result > 0 ? result:-result;
    cout<<result<<endl;
    return 0;
}