#include <bits/stdc++.h>
using namespace std;

bool binary_search(vector<int>& v, int key) {
    int left = 0;
    int right = v.size() - 1;

    if (v.size() == 0) {
        return false;
    }

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevent overflow
        if (v[mid] == key) {
            return true;
        } else if (v[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

bool binary_s(vector<int>& v, int key, int low, int high) {
    if (low > high) {
        return false;
    }
    int mid = low + (high - low) / 2; // Prevent overflow
    if (v[mid] == key) {
        return true;
    } else if (v[mid] < key) {
        return binary_s(v, key, mid + 1, high);
    } else {
        return binary_s(v, key, low, mid - 1);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    vector<int> v(n);
    
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int key;
    cout << "Enter the element you wish to find: " << endl;
    cin >> key;
    
    // Sort the array before performing binary search
    sort(v.begin(), v.end());
    
    int high = v.size() - 1;
    int low = 0;

    cout << "Result from recursive binary search: " << binary_s(v, key, low, high) << endl;
    cout << "Result from iterative binary search: " << binary_search(v, key) << endl;
    
    return 0;
}
