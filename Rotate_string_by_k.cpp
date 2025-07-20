#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void rotate(char* a, int k) {
    int n = strlen(a);
    k = k % n;

    reverse(a, a+n);
    reverse(a, a+k);
    reverse(a+k, a+n);

}
int main() {
    char a[100];
    cin.getline(a, 100, '\n');

    int k;
    cin>>k;

    rotate(a, k);
    cout<<a<<endl;

    return 0;
}