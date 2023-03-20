#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    const int MAXSIZE=5;
    int matrix[3][MAXSIZE] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int *p = &matrix[0][0];

    for (int i = 0; i < 3; i++) {
        //cout<<p[i]<<endl;
        for (int j = 0; j < 5; j++) {
            // Visualiza los valores de matriz usando unicamente p
            p = &matrix[i][j];
            cout << *p << " ";
        }

        cout <<endl;
    }

    return 0;
}
