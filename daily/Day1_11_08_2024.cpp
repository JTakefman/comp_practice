/* 
Problem:
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

#include <iostream>
#include <unordered_map>

using namespace std;

bool solve(int k, int *arr, int size) {
    unordered_map<int,bool> hash;
    for (int i = 0; i < size; i++) {
        if (hash.contains(k-arr[i])) {
            return true;
        }
        else {
            hash[arr[i]]=true;
        }
    }
    return false;
}

int main() {
    int *arr = new int[4]{10, 15, 3, 8};
    cout << "Solved " << solve(17, arr, 4) << endl;
    delete[] arr;
}