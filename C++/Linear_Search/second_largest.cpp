#include <iostream>

#include <cassert>
#include <vector>

using namespace std;

int find_second_largest( vector<int> arr)
{
    int size = arr.size();
    int maximum = arr[0];
    int s_largest = INT_MIN;
    for( int i = 1; i<size;i++)
    {
        if (arr[i] >= maximum)
        {
            maximum = arr[i];
        }
    }
        for( int i = 0; i<size;i++)
    {
        if (arr[i] >= s_largest && arr[i] != maximum)
        {
           s_largest = arr[i];
        }
    }
    return s_largest;
}

int main() {
    // Test 1: Normal case
    assert(find_second_largest({5, 2, 8, 1, 9}) == 8);
    
    // Test 2: Second largest at the beginning
    assert(find_second_largest({8, 5, 3, 1}) == 5);
    
    // Test 3: Duplicate largest values
    assert(find_second_largest({9, 9, 5, 2}) == 5);
    
    // Test 4: Only 2 elements
    assert(find_second_largest({10, 5}) == 5);
    
    // Test 5: Negative numbers
    assert(find_second_largest({-1, -5, -2, -10}) == -2);
    
    // Test 6: Mix of positive and negative
    assert(find_second_largest({5, -2, 8, -10, 3}) == 5);
    
    // Test 7: All same except one
    assert(find_second_largest({5, 5, 5, 10}) == 5);
    
    cout << "All tests passed!" << endl;
    return 0;
}