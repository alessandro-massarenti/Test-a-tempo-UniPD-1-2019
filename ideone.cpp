#include <iostream>
using namespace std;

int main() {

    int A[50];
    int c = 0;

    int A1[10][5];
    int A2[10][5];
    bool r = true;
    bool B[10][10];

    int *p = &A1[0][0];

    for(int i = 0; i< 50 ; i++){
        A[i] = (rand() % 71);
    }

    for(int i = 0; i<10; i++){
        for(int j = 0; j<5; j ++){
            A1[i][j] = A[c];
            cout << A1[i][j] << " ";
            c++;
        }
        cout << endl;
    }
    cout << endl << endl;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<10; j++){
            A2[j][i] = *(p++);
        }
    }
    for(int i = 0; i<10; i++) {
        for (int j = 0; j < 5; j++) {
            cout << A2[i][j] << " ";
        }
        cout << endl;
    }
    /* confronto */

    for(int i = 0; i<10; i++) {
        for(int j = 0; j < 10; j++){
            r = true;
            for(int k = 0; k<5; k++ ){
                for(int l = 0; l<5;l++){
                    if(A2[i][k]==A2[j][l]) {
                        r = false;
                    }
                }
            }
            B[i][j] = r;
        }
    }

    cout << endl << endl;

    for( int i = 0; i < 10; i++){
        for( int j = 0; j < 10; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}