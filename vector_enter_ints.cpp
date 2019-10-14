#include <iostream>
#include <string>
#include <vector>

using namespace std;

main() {

  vector<int> nums(3);   
  cout << "enter 3 numbers\n";

  for(int i = 0; i < 3; i++) {
    cin >> nums[i];
  }

  int max = nums[0];
  int min = nums[0];

  for(int i = 0; i < nums.size(); i++) {
    if(nums[i] < min) {
      min = nums[i];
    }
    if(nums[i] > max) {
      max = nums[i];
    }
  }

  cout << "max: " << max << endl;
  cout << "min: " << min << endl;
}
