#include <iostream>

int main()
{
    int counter = 1;

    while (counter <= 100)
    {

        if (counter % 3 == 0 && counter % 5 == 0)
        {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (counter % 3 == 0)
        {
            std::cout << "Fizz" << std::endl;
        }
        else if (counter % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;
        }
        else
        {
            std::cout << counter << std::endl;
        }
        counter++;
    }

    return 0;
}
