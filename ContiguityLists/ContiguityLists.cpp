#include <iostream>

int main()
{
    int length;
    std::cin >> length;
    for (int i = 0; i < length; ++i)
    {
        bool empty = true;
        for (int j = 1, buf; j <= length; ++j)
        {
            std::cin >> buf;
            if (buf == 1)
            {
                empty = false;
                std::cout << j << ' ';
            }
        }
        if (empty)
        {
            std::cout << 0;
        }
        std::cout << std::endl;
    }
}

