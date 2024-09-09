#include <iostream>
#include <vector>
using namespace std;

void p381A(vector<int> nums){
    int sereja = 0;
    int dima = 0;
    int left = 0;
    int right = nums.size() - 1;
    bool turn = true;

    while (left <= right) {
        if (nums[left] > nums[right]) {
            if (turn) {
                sereja += nums[left];
            } else {
                dima += nums[left];
            }
            left++;
        } else {
            if (turn) {
                sereja += nums[right];
            } else {
                dima += nums[right];
            }
            right--;
        }
        turn = !turn; 
    }

    cout << sereja << " " << dima << endl;
}

int main()
{
    int size = 0;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    p381A(nums);
    return 0;
}
