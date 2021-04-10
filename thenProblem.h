#include <iostream>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

void thenProblem() {
    int n, s, l;
    
    cin >> n;
    while (n--) {
        int bSize = 1;
        cin >> s >> l;
        for (int a = s; a <= l; a++) {
            int f = a;
            int size = 1;
            while (f != 1) {
                if (f != 1 && f % 2 == 1) {
                    f = (3*f) + 1;
                } else if (f != 1 && f%2 == 0) {
                    f /= 2;
                }
                size++;
            }
            if (size > bSize) {
                bSize = size;
            }
        }
        cout << s << " " << l << " " << bSize << endl;
        
    }
}

//10 5 16 8 4 2 1
//100 50 25 76 38 19 58 29 88 44 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
//22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
//1  2  3  4  5  6  7  8  9  10 1112 13141516

