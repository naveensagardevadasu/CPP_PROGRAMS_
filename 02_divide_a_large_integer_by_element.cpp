#include<iostream>
using namespace std;

int function_element_extraction(int value)
{
    if(value != 0) cout<<value%10<<endl;
    return function_element_extraction(value/10);
}

int main()
{
    int large_value = 12345;

    //The code below prints the each element from right to left
    while(large_value != 0)
    {
        cout<<large_value%10<<endl;
        large_value /= 10;
    }

    cout<<"implementing with recursive functionm"<<endl;

    large_value = 743273;
    //implementing the same code by recursive funtion

    function_element_extraction(large_value);
    return 0;
}