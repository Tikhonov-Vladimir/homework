#include <iostream>

using namespace std;

int str(const char* t, const char* p) { 
    int tsize{}, psize{};

    for (int i = 0; t[i] != '\0'; ++i)
        ++tsize;

    for (int i = 0; p[i] != '\0'; ++i)
        ++psize;

    if (psize <= tsize) {
        int cur{}; 
        for (int i = 0; i < tsize; ++i) {
            if (t[i] != p[i - cur])
                cur = i + 1;
            if (i - cur + 1 == psize)
                return cur;
        }
        return -1;
    }
    else
        return -1;
}