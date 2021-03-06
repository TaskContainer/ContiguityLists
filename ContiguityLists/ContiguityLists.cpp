#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

template<typename T> std::ostream &operator<<(std::ostream &stream, const std::vector<T> &vec)
{
    std::copy(vec.cbegin(), vec.cend(), std::ostream_iterator<T>(stream, " "));
    return stream;
}

int main()
{
    std::ifstream input("input.txt");
    // Создаём список смежности
    std::vector<std::vector<int>> list(*std::istream_iterator<int>(input));
    for (auto &i : list)
    {
        for (int j = 0; j < list.size(); ++j)
        {
            if (const auto buf = *std::istream_iterator<int>(input); buf)
            {
                i.push_back(j + 1);
            }
        }
    }
    for (const auto &i : list)
    {
        if (i.empty())
        {
            std::cout << 0 << std::endl;;
        }
        else
        {
            std::cout << i << std::endl;;
        }
    }
    std::cin.get();
}

