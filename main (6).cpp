/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list; 
     
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);
    
    for(int n : list){
        std::cout << n << " ";
    }
    
    std::forward_list<std::string> list2;
    list2.push_front("cherry");
    list2.push_front("banana");
    list2.push_front("apple");
    
    for(std::string f : list2){
        std::cout << f << " ";
    }

    return 0;
}