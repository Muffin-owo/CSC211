/*
Assignment 2
In this assignment, I can practice to use allocate and deallocated the pointer

*/


#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    using namespace std;
    
    string* str = nullptr; //pointer to a string and set it to nullptr
    bool check = true;
    
    //looping
    while(check){
        if (str == nullptr){
            str = new string; //allocate 
        }
        
         //User input
        cout << "Input the short string(type end to end) : ";
        getline(cin , *str);
        
        //stop the loop
        if(*str == "end" ){
            check = false;
            break;
        }  
        
        reverse(str->begin() , str->end());
        
        cout << "Reversed string: " << *str << endl;
    }
    
    //deallocated
    delete str;
    str = nullptr;
    
    //allocate new pointer
    int* num1 = new int(8964);
    int* num2 = nullptr;
    
    //second pointer to the first
    num2 = num1;
    
    cout << "The pointer 2 value is " << *num2 << endl;
    cout << "It safe to do" <<endl;
    
    //deallocated first pointer
    delete num1;
    num1 = nullptr;
    
    cout << "After deallocated pointer 1 , second pointer is not safe to use now" << endl;
    cout << "You dont need to delete pointer 2" << endl;
    
    num2 = nullptr;
   

    return 0;
}