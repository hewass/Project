#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

using namespace std;

vector<int> read_array(const string& array_name) {
    int size;

    cout << array_name << " Size : ";
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; ++i) {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    return arr;
}

void print_array(const string& array_name, const vector<int>& arr) {
    cout << "\n" << array_name << ": [";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";
}

void sort_insertion(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1; 

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void sort_bubble(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) { 
        for (int j = 0; j < n - i - 1; ++j) { 
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}

vector<int> merge_arrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> result;

    size_t i = 0; 
    size_t j = 0; 

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main() {
 
    vector<int> array_A = read_array("Array A");
    vector<int> array_B = read_array("Array B");

  
    sort_insertion(array_A);
    sort_bubble(array_B);

    vector<int> array_C = merge_arrays(array_A, array_B);

    print_array("Array C", array_C);
  
    return 0;
}