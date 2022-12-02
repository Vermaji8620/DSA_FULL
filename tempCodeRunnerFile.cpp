#include <iostream>
#include <vector>
using namespace std;

void go(int *arr, int sz, int k, vector<int> &vctr)
{
    int i = 0;
    int j = 0;
    int maxx = INT_MIN;
    int minn = INT_MAX;
    while (j <= sz)
    {
        if (j - i + 1 <= k)
        {
            maxx = max(maxx, arr[j]);
            minn = min(minn, arr[j]);
            j++;
        }
        else
        {
            vctr.push_back(maxx + minn);
            i++;
            for (int p = i; p <= j; p++)
            {
                maxx = max(maxx, arr[j]);
                minn = min(minn, arr[j]);
            }
            j++;
        }
    }
}

int prit(vector<int> vcr, int count)
{
    for (auto i : vcr)
    {
        count += i;
    }
    return count;
}

int main()
{
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int size = 7;
    int k = 4;
    vector<int> vctr;
    go(arr, size, k, vctr);
    int count = 0;
    cout << prit(vctr, count);
    return 0;
}
