#include <iostream>
using namespace std;
int main (){

    // A
    int a, b;
    for (a=6; a>=0; a--) {
        // Enter the blanks accordinf to m
        // 11 = is the number of * at the bottom - 2 to take away from the sides
        for (b=0; b<(6-1*a); b++) cout << "*";
        cout << endl;
    }
    
    // A
    int c, d;
    for (c=6; c>=0; c--) {
        // Enter the blanks accordinf to m
        for (d=0; d<c; d++) cout << " ";
        // 11 = is the number of * at the bottom - 2 to take away from the sides
        for (d=0; d<(6-1*c); d++) cout << "*";
        cout << endl;
    }



    // C
    int m, n;
    // 6 = number o
    for (m=6; m>=0; m--) {
        // Enter the blanks accordinf to m
        for (n=0; n<m; n++) cout << " ";
        // 11 = is the number of * at the bottom - 2 to take away from the sides
        for (n=0; n<(11-2*m); n++) cout << "*";
        // New line
        cout << endl;
    }

    // D

        // C
    int e, f, count;
    // 6 = number o
    while (count <= 11)
        for (e=6; e>=0; e--) {
            // Enter the blanks accordinf to m
            for (f=0; n<f; f++) cout << " ";
            // 11 = is the number of * at the bottom - 2 to take away from the sides
            for (f=0; f<(11-2*e); f++) cout << "*";
            // New line
            count++;
            cout << endl;
        }
    return 0;
}