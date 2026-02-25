#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1{3, 9, 1, 7, 5, 10, 6, 8, 2, 4};

    cout << "Orginal Vector: ";
    for (auto num: v1) 
	cout << num << " ";
    cout << endl;

    sort(v1.begin(), v1.end(), greater<>());

    cout << "Sorted Vector: ";
    for (auto num: v1) 
        cout << num << " ";
    cout << endl;

    return 0;
}
