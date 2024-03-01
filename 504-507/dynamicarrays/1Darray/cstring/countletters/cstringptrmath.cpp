#include <iostream>

using std::cout, std::endl;

int main() {
    // declare cstring with '*' called str with 3 elements
    char* str = new char[3];

    str[0] = 'H';
    str[1] = 'i';
    str[2] = '\0';

    // count characters
    unsigned int cnt = 0;
    // set up pointer called iter to move through string and not modify str
    char* iter = str;

    // iterate through string using iter and count as we go
    while(*iter != '\0') //dereference iter and check if it's the end of string
    {
        cnt++;
        iter++; //iterate the POINTER, goes to next char in string
        //this doesn't iterate the address by 1, c++ knows it's a string and how much to iterate by
    }

    cout << "cnt: " << cnt << endl;
    delete[] str; //free memory to avoid memory leak

    //keep in mind to NOT edit str, that's why we use iter to iterate through the string

    //try to avoid doing pointer arithmetic because it's hard
}