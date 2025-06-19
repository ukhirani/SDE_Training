#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr) {
    map<int, int> freq;
    int max_freq = 0, min_id = INT_MAX;
    for(int id : arr) {
        freq[id]++;
        if(freq[id] > max_freq || (freq[id] == max_freq && id < min_id)) {
            max_freq = freq[id];
            min_id = id;
        }
    }
    return min_id;
}

int main() {
    int n;
    cout << "Enter number of sightings: ";
    cin >> n;
    vector<int> birds(n);
    cout << "Enter bird IDs: ";
    for(int i = 0; i < n; i++) cin >> birds[i];
    cout << "Most frequent bird ID: " << migratoryBirds(birds) << endl;
    return 0;
}
