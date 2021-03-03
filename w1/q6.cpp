#include <iostream>

using namespace std;

int main(){

    int arr[10];
    int x;
    int total = 0;

    // Loop through 10 entires and insert each entry into an array

    for(x=0; x<10; x++){
        cout << "Please enter number " << x << ":" << endl;
        cin >> arr[x];
    }

    // Loop through the array and add tohether the array total
    for(x=0; x<10; x++){
        total = total + arr[x];
    }

    std::cout << total << std::endl;

}