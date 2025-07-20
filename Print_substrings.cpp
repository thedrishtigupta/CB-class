#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void printSubstr(char* a) {
    int n = strlen(a);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) cout<<a[k]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
}

int main() {
    char a[100];
    cin.getline(a, 100, '\n');

    printSubstr(a);

    return 0;
}