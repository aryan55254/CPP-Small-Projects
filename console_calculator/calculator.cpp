#include <iostream>
#include <limits>

float add(float a, float b)
{
    float sum = a + b;
    return sum;
}

float subtract(float a, float b)
{
    float difference = a - b;
    return difference;
}

float multiply(float a, float b)
{
    float product = a * b;
    return product;
}

void divide(float a, float b)
{
    if (b == 0)
    {
        std::cout << "Cannot divide by zero" << std::endl;
    }
    else
    {
        float ans = a / b;
        std::cout << "The quotient is " << ans << std::endl;
    }
}

int main()
{
    char cont;
    std::cout << "Welcome To The Console Calculator" << std::endl;

    do
    {
        std::cout << "Enter the first number:" << std::endl;
        float firstnum;
        while (!(std::cin >> firstnum))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input, try again" << std::endl;
        }

        std::cout << "Enter the second number:" << std::endl;
        float secnum;
        while (!(std::cin >> secnum))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input, try again" << std::endl;
        }

        while (true)
        {
            std::cout << "Enter the operator you want to use" << std::endl;
            std::cout << "+ for adding, - for subtracting, * to multiply, / to divide" << std::endl;
            char op;
            while (!(std::cin >> op))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input, try again" << std::endl;
            }

            if (op == '+')
            {
                std::cout << "The sum is " << add(firstnum, secnum) << std::endl;
                break;
            }
            else if (op == '-')
            {
                std::cout << "The subtraction is " << subtract(firstnum, secnum) << std::endl;
                break;
            }
            else if (op == '*')
            {
                std::cout << "The product is " << multiply(firstnum, secnum) << std::endl;
                break;
            }
            else if (op == '/')
            {
                divide(firstnum, secnum);
                break;
            }
            else
            {
                std::cout << "Invalid input, try again" << std::endl;
            }
        }

        std::cout << "Do you want to continue (y for yes, anything else to exit)?" << std::endl;
        char conti;
        std::cin >> conti;
        cont = tolower(conti);

    } while (cont == 'y');

    return 0;
}
