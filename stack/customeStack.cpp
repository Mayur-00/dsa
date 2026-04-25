
#include <iostream>
#include <list>
#include <stdexcept>

class Stack
{
public:
    std::list<int> list;

    int length()
    {
        return list.size();
    };

    void pushFront(int value)
    {
        list.push_front(value);
    };

    int peek()
    {
        if (list.size() == 0)
        {
            return 0;
        }

        return list.front();
    };

    void pop()
    {

         list.pop_front();
    }
};

int main()
{

    Stack newStack;

    newStack.pushFront(10);
    newStack.pushFront(30);

    std::cout << "the length of stack : " << newStack.length() << "\n";
    std::cout << "the last element : " << newStack.peek() << "\n";
    newStack.pop();
    std::cout << "the last element : " << newStack.peek() << "\n";

    return 0;
}