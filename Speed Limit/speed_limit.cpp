/** Summer Moreland - Speed Limit - Kattis **/

#include <iostream>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    while (n != -1)
    {
        int previous_entry_time = 0;
        int sum_miles = 0;

        for (int i = 0; i < n; i++)
        {
            int speed;
            int total_elapsed_time;

            std::cin >> speed >> total_elapsed_time;
            sum_miles += speed * (total_elapsed_time - previous_entry_time);
            previous_entry_time = total_elapsed_time;
        }
        std::cout << sum_miles << " miles\n";
        std::cin >> n;
    }
    return 0;
}
