#include <iostream>

#include <cassert>
#include <vector>

using namespace std;

int find_minimum( vector<int> arr)
{
    int size = arr.size();
    int minimum = arr[0];
    for( int i = 1; i<size;i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
        
    }
    return minimum;
}

int main() {
    // Test 1: Normal case
    assert(find_minimum({5, 2, 8, 1, 9}) == 1);
    
    // Test 2: Minimum at the beginning
    assert(find_minimum({1, 5, 8, 3, 9}) == 1);
    
    // Test 3: Minimum at the end
    assert(find_minimum({5, 8, 3, 9, 1}) == 1);
    
    // Test 4: All same numbers
    assert(find_minimum({5, 5, 5, 5}) == 5);
    
    // Test 5: Single element
    assert(find_minimum({42}) == 42);
    
    // Test 6: Negative numbers
    assert(find_minimum({5, -2, 8, -10, 3}) == -10);
    
    // Test 7: Mix of positive and negative
    assert(find_minimum({-5, 0, 5, -1}) == -5);
    
    cout << "All tests passed!" << endl;
    return 0;
}