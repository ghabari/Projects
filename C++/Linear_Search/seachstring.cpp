#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int search_char(string str, char target)
{
    int size = str.length();
    
    for( int i =0; i<size;i++)
    {
        if(str[i]==target)
        {
            return i;
        }
        
    }
    return -1;
}

int main() {
    // Test 1: Character exists
    assert(search_char("hello", 'l') == 2);
    
    // Test 2: Character at the beginning
    assert(search_char("hello", 'h') == 0);
    
    // Test 3: Character at the end
    assert(search_char("hello", 'o') == 4);
    
    // Test 4: Character not found
    assert(search_char("hello", 'x') == -1);
    
    // Test 5: Duplicate characters (return first)
    assert(search_char("mississippi", 's') == 2);
    
    // Test 6: Empty string
    assert(search_char("", 'a') == -1);
    
    // Test 7: Single character
    assert(search_char("z", 'z') == 0);
    
    cout << "All tests passed!" << endl;
    return 0;
}