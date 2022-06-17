#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle) {
    if (needle.empty()) {
        return 0;
    }

    /*
    int c = 0, pos = 0, pos2 = 0;

    for (int i = 0; i < haystack.size(); i++) {
        if (haystack[i] != needle[c]) {
            cout << haystack[i] << needle[c] << c << endl;
            c = 0;
            i = pos2;
        }

        if (haystack[i] == needle[0]) {
            pos2 = i;
        }

        if (haystack[i] == needle[c]) {
            c++;

            if (c == 1) {
                pos = i;
            }

            cout << haystack[i] << needle[c-1] << c << endl;
        }

        if (c == needle.size()) {
            return pos;
        }
    }
    */
    
    for (int i = 0; i < haystack.size(); i++) {
        if (i + needle.size() <= haystack.size()) {
            string sub = haystack.substr(i, needle.size());

            if (sub == needle) {
                return i;
            }
        }
    }

    return -1;
}

int main()
{
    string haystack = "mississippi";
    string needle = "issip";

    cout << strStr(haystack, needle) << endl;

    return 0;
}