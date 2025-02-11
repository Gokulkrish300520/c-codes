#include <iostream>
#include <vector>
using namespace std;

int findMajority(vector<int> &nums)
{
    int candidate = 0, count = 0;
    for (auto num : nums)
    {
        if (count == 0)
        {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);  // ✅ Correctly pre-sized vector
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];  // ✅ Directly taking input since the vector is resized
    }

    int maj = findMajority(nums);
    cout<<maj;
    // cout << "Majority Element: " << maj << endl;

    return 0;
}



