#include <iostream>
#include <cstring>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool check(char*a, char* b) {

    unordered_map<int, int> countA;
    unordered_map<int, int> countB;

    int n = strlen(a);
    int m = strlen(b);

    if (n != m) return false;

    for (int i = 0; i < n; i++) {
        countA[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        countB[b[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (countA[a[i]] != countB[a[i]]) return false;
    }

    return true;

}

int main() {
    char a[100];
    cin.getline(a, 100, '\n');

    char b[100];
    cin.getline(b, 100, '\n');

    cout<<check(a,b)<<endl;


    return 0;
}