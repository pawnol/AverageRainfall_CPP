/*
Adding Removing Vectors
Pawelski
5/12/2022
Please follow the insturctions on the activity guide!
*/

#include <iostream>
#include <vector>

/// <summary>
/// Calculates the average of the passed numbers.
/// </summary>
/// <param name="numbers">A set of numbers.</param>
/// <returns>The average of the set of numbers.</returns>
double Average(std::vector<double> numbers)
{
    double total = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        total += numbers[i];
    }
    return total / numbers.size();
}

int main()
{
    double measurement;
    std::vector<double> rainfall_measurements;

    std::cout << "Enter a rainfall measurement in inches (-1 to end) >> ";
    std::cin >> measurement;
    while (measurement != -1)
    {
        rainfall_measurements.push_back(measurement);
        std::cout << "Enter a rainfall measurement in inches (-1 to end) >> ";
        std::cin >> measurement;
    }
    std::cout << "The avereage daily rainfall is " << Average(rainfall_measurements) << " inches.\n";
    return 0;
}
