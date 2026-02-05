#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits> // Required for numeric_limits

using namespace std;

int main() {
    int n;
    // Step 1: Read the number of test cases/lines
    if (!(cin >> n)) return 0;

    // Step 2: The "Buffer Clear"
    // This removes the '\n' sitting in the buffer after reading 'n'
    // It's safer than 'ws' if there are trailing spaces
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string line;
    // Step 3: Outer Loop - Read exactly 'n' lines
    for (int i = 0; i < n; ++i) {
        if (!getline(cin, line)) break;
        
        // Skip truly empty lines if they occur unexpectedly
        if (line.empty()) continue;

        stringstream ss(line);
        string token;
        vector<int> current_line_data;

        // Step 4: Inner Loop - Tokenize by comma
        while (getline(ss, token, ',')) {
            // stoi converts string to int
            current_line_data.push_back(stoi(token));
        }

        // --- DO YOUR LOGIC HERE ---
        for (int val : current_line_data) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}