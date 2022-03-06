#include <iostream>

using namespace std;

template<typename genericType> //template for generic type
void Swap(genericType& firstNum, genericType& secondNum)
{
    genericType temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;
}

int main()
{
    int firstNum, secondNum;
    cout << "Give me two numbers to swap: ";
    cin >> firstNum;
    cin >> secondNum;
    
    Swap(firstNum, secondNum);
    cout << "first Number: " << firstNum << endl;
    cout << "second Number: " << secondNum << endl;

    // swap two char variables
    char firstChar = 'a', secondChar = 'z';
    Swap(firstChar, secondChar);
    cout << "first char: " << firstChar << endl;
    cout << "second char: " << secondChar << endl;
    return 0;
}
