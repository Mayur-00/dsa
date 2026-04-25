
#include <iostream>
#include <stack>


int main()
{

    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(40);

     std::cout << "Top: " << s.top() << std::endl; // Outputs 20
     s.pop(); 
     std::cout << "Top: " << s.top() << std::endl; // Outputs 20

    return 0;
}