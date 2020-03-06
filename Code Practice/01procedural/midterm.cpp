#include <iostream>
#include <list>
#include <map>
#include <iterator>
#include <utility>
#include <functional>
#include <algorithm>
#include <vector>
#include <iterator>

using std::make_pair;
using std::map;
using std::list;
using std::cout;
using std::vector;
using std::iterator;

/*
int *setUpArray(int size, int value){
    int *a = new int[size];
    
    for (int i=0; i < size; ++i)
        a[i] = value;
    return a;
}

int *setUpArray(int size){
    int *a = new int[size];
    
    for (int i=0; i < size; ++i)
        a[i] = 0;
    return a;
}

int *setUpArray(){
    int *a = new int[100];
    
    for (int i=0; i < 100; ++i)
        a[i] = 0;
    return a;
}*/

int main(){
    // Splice example //
/*
    list<int> listOne = {1, 2, 3};
    list<int> listTwo = {4, 5};
    list<int> listThree = {6, 7, 8};

    listOne.splice(listOne.begin(), listTwo);

    cout << "list 1 after splice: " << std::endl;
    for (auto x: listOne)
        cout << x << " ";

    cout << std::endl;
    listThree.splice(listThree.end(), listOne);

    cout << "list 3 after splice: " << std::endl;
    for (auto x: listThree)
        cout << x << " ";
    
    cout << std::endl;
    return 0;
    

   // Safe Insert example
   map<int, char> employees;

   auto ret = employees.insert(make_pair(123, "Joe"));
   

  // count_if and lambda example

    std::vector<int> v{ 1, 2, 3, 4, 4, 3, 7, 8, 9, 10 };
 
    // determine how many integers in a std::vector match a target value.
    int target1 = 3;
    int target2 = 5;
    int num_items1 = std::count(v.begin(), v.end(), target1);
    int num_items2 = std::count(v.begin(), v.end(), target2);
    std::cout << "number: " << target1 << " count: " << num_items1 << '\n';
    std::cout << "number: " << target2 << " count: " << num_items2 << '\n';
 
    // use a lambda expression to count elements that are even.
    int num_items_even = std::count_if(v.begin(), v.end(), [](int i){return i += 2;});
    std::cout << "number even: " << num_items_even << '\n';
    

    // transform() example
    int c1[] = {1, 2, 3, 4, 5};
    int c2[] = {5, 4, 3, 4, 5};
    int c3[5] = {0};

    for(auto x: c1)
    for(auto y: c2)
    for(auto i: c3)
        x > y ? (c3[i] = x) : (c3[i] = y);
        

    //std::transform(c1, c1 + 5, c2, c3, std::greater<int>());

    for(auto e: c3)
        cout << e << std::endl;
    */

    //vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    vector<int>::iterator it = v2.begin();
    
    copy(v1.begin(), v1.end(), std::inserter(v1, it));
}

// init list example //
// MyClass(int, char, string) : x_(x), y_(y), z_(z){}