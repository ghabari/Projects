#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int linear_search(vector<int> arr, int target)
{
 
    int length = arr.size();

    for( int i = 0; i<length; i++)
    {
        if(arr[i] == target)
            {
                return i;
            }
    }
    return -1;
}

int main()
{ 
      assert(linear_search({5, 2, 8, 1, 9}, 8) == 2);
    
    // Test 2: Target at the beginning
    assert(linear_search({5, 2, 8, 1, 9}, 5) == 0);
    
    // Test 3: Target at the end
    assert(linear_search({5, 2, 8, 1, 9}, 9) == 4);
    
    // Test 4: Target not found
    assert(linear_search({5, 2, 8, 1, 9}, 10) == -1);
    
    // Test 5: Duplicate values (return first occurrence)
    assert(linear_search({5, 2, 8, 2, 9}, 2) == 1);
    
    // Test 6: Empty vector
    assert(linear_search({}, 5) == -1);
    
    cout << "All tests passed!" << endl;
    return 0;
}
