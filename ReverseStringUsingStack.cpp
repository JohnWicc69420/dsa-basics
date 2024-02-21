#include <iostream>
#include <stack> //using the stack library to create empty stack and push and pop array values in it
using namespace std;

// creating a print function to print array values
void print(string array[])
{
for (int i=0 ; i<5 ;i++){

    cout<<array[i];
}
}

// creating a reverse function to reverse array values
void reverse(string array[])
{
    // create an empty stack of integers
    stack<string> stack;
 
    // push each array element into a stack
    for (int i = 0; i < 5; i++) {
        stack.push(array[i]);
    }
 
    // start from index 0
    int num = 0;
 
    // pop values from the stack until it becomes empty
    while (!stack.empty())
    {
        // assign each popped item back to the original array
        array[num] = stack.top();
        stack.pop();
        num++;
    }
}

main()
{
string array[5] = {"U","s","m","a","n"};
reverse(array);
print(array);
}

