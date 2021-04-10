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
