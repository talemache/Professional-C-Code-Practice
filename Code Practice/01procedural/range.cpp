#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

//void myFunc(string);
//void myFunc(string&);
void myFunc(const string&);

int main(){
    /*int a[] = {1, 2, 3, 4, 5};

    for(auto e: a){
        e += 5;
        std::cout << e << std::endl;
    }
    int myArray[10] = {2};

    for(int e: myArray)
        std::cout << e << std::endl;*/
    /*string myStr1;

    myStr1 = "Hello";

    myFunc(myStr1);
    //myFunc(myStr2);
    //myFunc(myStr3);
    cout << myStr1 << endl;
    //cout << myStr2 << endl;
    //cout << myStr3 << endl;
    */
   int a = 1, b =2;
   int i =(a+=2, a+b);

   cout << i << endl;
}

/*

void myFunc(string str){
    string myStr = "test";
    cout << str << endl;
    str = myStr;
}

void myFunc(string & str){
    string myStr = "test";
    cout << str << endl;
    str = myStr;
}

void myFunc(const string & str){
    string myStr = "test";
    cout << str << endl;
}*/