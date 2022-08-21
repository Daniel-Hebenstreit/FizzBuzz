#include <iostream>

int main()
{
    std::string str = {};
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            str = "Fizz";
        }
        if (i % 5 == 0)
        {
            str = "Buzz";
        }
        else
        {
            str = std::to_string(i);
        }
    }

    return 0;
}
