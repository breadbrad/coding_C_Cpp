/** 
- Included with compiler 
- contains containers / data structures / iterators / algorithms */
// Vectors : equivalent to array lists(dynamic size)  in other languagues 
#include <vector>
...
std::vector<int> int_list;
int_list.push_back(1);
int tmp = int_list[0]; // tmp = 1 
int_list.pop_back(); // int_list now empty 

=========================================
// Map : like a dictionary in Python (tree implementation) 
#include <map>
...
std::map<char,int> letter_to_int;
letter_to_int['a'] = 1;
letter_to_int['b'] = 2;
int pos = letter_to_int['a'] // pos = 1;
=========================================
//<array> : array with functions 
//<list> : doubly linked list
//<set> : stores only unique elements (tree implementation) 
//<unordered_map> : actual hash table 
//<unordered_set> : stores only unique elements (hash table implementation)


=========================================
//Iterators : object that points to elements in a data structure (can iterate through like a pointer)

//vector iterator : 
std::vector<int>::iterater it;
//access element at iterator : *it;
//can do add/subtract to iterators : it++, it--

#include <vector>
#include <iostream>
...
std::vector<int> vec;
for(int i=1; i<=5; i++)
        vec.push_back(i);
for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        std::cout << ' ' << *it;
}
// will print : 1 2 3 4 5 

==============================================
// Useful Algorithm
#include <algorithm>
// sort a vector
std::sort(vec.begin(), vec.end());
// reverse a vector 
std::reverse(vec.begin(), vec.end());
// min/max
std::min(3,1) == 1
std::max(3,1) == 3



































