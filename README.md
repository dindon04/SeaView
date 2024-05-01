## Description
The SeaView project helps to find indices of houses from which the sea is visible.


## Functionality
The `seaView` function works as follows:

1. **Initialization**: The function starts by initializing a vector `houseWithView` that will hold the indices of houses with a sea view. It also sets the maximum height - `max`, to be the height of the first house and stores its index as `maxIndex`.

2. **Finding the Maximum**: The function then goes through each house, starting from the second one, and compares its height with the current maximum. If the height of the current house is greater than the maximum, it updates `max` and `maxIndex`.

3. **Adding Houses with Sea View**: After the house with the maximum height is found, the function goes through the remaining houses and adds the index of the house to `houseWithView` if its height is greater than the height of the next house.

4. **Adding the Last House**: At the end, the function adds the index of the last house to `houseWithView` as the last house will always have a sea view.

5. **Returning the Result**: Finally, the function returns `houseWithView` which contains the indices of all houses with a sea view.


## Testing

### Test Cases
- **Test Case 1**: This test case checks the scenario where the houses are in ascending order of their heights. The expected result is the index of the last house as it would have the sea view.
- **Test Case 2**: This test case checks the scenario where the houses are in descending order of their heights. The expected result is a vector of indices of all houses as each house would have the sea view.
- **Test Case 3**: This test case checks a random scenario where the houses are neither in ascending nor descending order of their heights. The expected result is a vector of indices of houses that have the sea view.
