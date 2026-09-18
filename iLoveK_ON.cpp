#include <iostream>
#include <string>

using namespace std;

int main() {
    const string s = "!NO-K evol I";
    for (int i = static_cast<int>(s.length()) - 1; i >= 0; i--) {
        cout << s[i];
    }
    return 0;
}
