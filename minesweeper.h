#include <iostream>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

void minesweeper() {
    int n;
    
    cin >> n;
    // number of tries
    while (n--) {
        int w, l;
        
        // read the intervals
        cin >> w >> l;
        char field[100][100] = {};
        
        // read the field
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < l; j++) {
                cin >> field[i][j];
            }
        }
        
        
        int fieldOut[100][100] = {};
        // process the array
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < l; j++) {
                if (field[i][j] == '*') {
                    fieldOut[i][j] = -20;
                    if (i-1 >= 0) {
                        fieldOut[i-1][j]+=1;
                        if (j-1 >= 0) {
                            fieldOut[i-1][j-1]+=1;
                        }
                        if (j+1 < l) {
                            fieldOut[i-1][j+1]+=1;
                        }
                    }
                    if (i+1 < w) {
                        fieldOut[i+1][j]+=1;
                        if (j-1 >= 0) {
                            fieldOut[i+1][j-1]+=1;
                        }
                        if (j+1 < l) {
                            fieldOut[i+1][j+1]+=1;
                        }
                    }
                    if (j-1 >= 0) {
                        fieldOut[i][j-1]+=1;
                    }
                    if (j+1 < l) {
                        fieldOut[i][j+1]+=1;
                    }
                    
                }
            }
        }
        
        // Display the array
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < l; j++) {
                if (fieldOut[i][j] < 0) {
                    cout << "* ";
                } else {
                    cout << fieldOut[i][j] << " ";
                }
                
            }
            cout << endl;
        }
        
    }
}
