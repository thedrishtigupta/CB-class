#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void input(char *a, int n, char delimit = '\0') {

    int i = 0;
    char ch = cin.get();

    while (ch != delimit && i < n-1) {
        a[i++] = ch;
        ch = cin.get();
    }
    a[i] = '\0'; // important step!!
}

int strLen(char *a) {
    int len = 0;
    int i = 0;
    int ch = a[0];
    while (ch != '\0') {
        len++;
        ch = a[++i];
    }
    return len;
}

bool isPalindrome (char *a) {
    int n = strLen(a);

    for (int i = 0; i <= n/2; i++) {
        if (a[i] != a[n-i-1]) return false;
    }
    return true;
}

void NstringInput(char *a) {
    int n;
    cin>>n;
    cin.get(); // to ignore whitespace after n input

    int len = 0;

    for (int i = 0; i < n; i++) {
        cin.getline(a+len, 100, '\n');
        len = strLen(a);
    }
    a[len+1] = '\0';
    cout<<a<<endl;
}
void append(char* a, char* b) {

    int lenA = strlen(a);
    int lenB = strlen(b);

    int j = 0, i = lenA;

    while (j <= lenB) {
        a[i++] = b[j++];
    }
}
// void largestStr(int n) {
//     char a[100];
//     cin.get();
//     int len = 0;
//     while(n--) {
//         cin.getline(a, 100, '\n');
//         len = max(len, strlen(a));
//     }
// }

void reverseStr (char* a) {
    int n = strLen(a);

    for (int i = 0; i <= n/2; i++) {
        swap(a[i], a[n-i-1]);
    }
}
int main() {
    /*
    //char str[] = "Hello";
    // cout<<str<<endl; // will print hello, until '\0' character
    // cout<<&str<<endl; // print address where str is present
    // cout<<endl;
    // for (int i = 0; i < 6; i++) {
    //     cout<<&str+i<<endl;
    // }

    //char a[100];
    //cin>>a; // adds '\0' by default

    //cin.getline(a, 100, '\n');
    //cin.getline(a+6, 100, '.');

    //cout<<a<<endl;

    char ch[100];
    //input(ch, 50, '#');
    //cout<<ch<<endl;
    */

    //char ch[100];
    // cin.getline(ch, 100, '\n');
    // int len = strLen(ch);
    // cout<<len<<endl;


    //NstringInput(ch);

    // char a[100];
    // char b[100];
    // cin.getline(a, 100, '\n');
    // cin.getline(b, 100, '\n');

    // append(a, b);
    // cout<<a<<endl;

    char a[100];
    cin.getline(a, 100, '\n');
    reverseStr(a);
    cout<<a;


    return 0;
}