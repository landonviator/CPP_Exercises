#include <iostream>
#include <vector>
#include <string>

namespace BinarySearch{

    void printCount(int &count)
    {
        std::cout << "\nThe answer was found in " << count << " iterations" << std::endl;
    }

    int binarySearchVector(std::vector<int> &numVec, int &vecSize, int &userTarget)
    {
        int left = 0;
        int right = vecSize - 1;
        int mid;
        int count = 0;

        while (left <= right)
        {
            mid = left + (right - left) * .5;
            if (numVec[mid] == userTarget)
            {
                printCount(count);
                return mid;
            }
            else if (userTarget > numVec[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
            count += 1;
        }
        return -1;
    }

    void printResults(std::vector<int> &theVector, int &result, int &target)
    {
        if (result >= 0)
        {
            std::cout << "The number " << theVector[result] << " was found at index "
                    << result << "\n"
                    << std::endl;
        }
        else
        {
            std::cout << "The number " << target << " was not found. \n"
                    << std::endl;
        }
    }
}

int main()
{
    int userTarget;

    std::vector<int> randomIntGroup{100, 3, 5, 6, 4, 10, 12, 13, 14, 15, 23, 24, 54, 98, 45, 44};
    std::sort(randomIntGroup.begin(), randomIntGroup.end());
    std::cout << "\nEnter a target Integer: ";
    std::cin >> userTarget;

    int vecSize = randomIntGroup.size();
    int result = BinarySearch::binarySearchVector(randomIntGroup, vecSize, userTarget);
    BinarySearch::printResults(randomIntGroup, result, userTarget);

    return 0;
}