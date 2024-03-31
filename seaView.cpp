#include <vector>
#include <iostream>

std::vector<int> seaView(std::vector<int> house)
{
    std::vector<int> houseWithView;

    int max = house[0];
    int maxIndex = 0;

    for(int i = 1; i != house.size(); i++)
    {
        if(max < house[i])
        {
            max = house[i];
            maxIndex = i;
        }
    }
    for(int i = maxIndex; i != house.size() - 1; i++)
    {
        if(house[i] > house[i+1]) houseWithView.push_back(i);
    }
    houseWithView.push_back(house.size() - 1);

    return houseWithView;
}