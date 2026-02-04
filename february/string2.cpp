#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
int N;
cin >> N;
cin.ignore(); // Crucial! Clears the newline character after reading N
string line;

for(int i = 0; i < N; i++) {
    getline(cin, line);
    // ... rest of your stringstream logic ...
}
}