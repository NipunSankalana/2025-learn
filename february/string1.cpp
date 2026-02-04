#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    vector<int> all_numbers;

    // 1. Outer Loop: Read one whole line at a time from the console
    while (getline(cin, line)) {
        
        // Stop if the line is empty (common way to end input in some problems)
        if (line.empty()) break;

        // 2. Create a stringstream for the current line
        stringstream ss(line);
        string temp;

        // 3. Inner Loop: Process the current line by commas
        while (getline(ss, temp, ',')) {
            // Push into our vector
            all_numbers.push_back(stoi(temp)); 
        }
        
        // Optional: If you want to process data line-by-line, 
        // you could do your logic here and then clear the vector.
    }

    // Output all numbers gathered from all lines
    cout << "Total numbers found: " << all_numbers.size() << endl;
    for(int n : all_numbers) {
        cout << n << " ";
    }

    return 0;
}