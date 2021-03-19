/** Summer Moreland - Autori - Kattis **/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line, short_variation;
    std::getline(std::cin, line);

    short_variation.push_back(line[0]);

    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == '-')
        {
            short_variation.push_back(line[i + 1]);
        }
    }
    std::cout << short_variation << "\n";
}