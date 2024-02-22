#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> lines;
    string line;
    while(getline(cin, line)){
        lines.push_back(line);
    }
    for (string line : lines){
        cout<<line<<endl;
    }

    return 0;
}
