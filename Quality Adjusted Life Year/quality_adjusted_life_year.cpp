/** Summer Moreland - Speed Limit - Kattis **/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double total_years = 0;

    for (int i = 0; i < n; i++)
    {
        double quality;
        double years;

        std::cin >> quality >> years;
        total_years += quality * years;
    }
    std::cout << fixed << setprecision(3) << total_years << endl;
    return 0;
}