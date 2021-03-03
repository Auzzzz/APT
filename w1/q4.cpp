#include <iostream>
#define PI 3.14159

using namespace std;

int main(){
    float radius, area, circum;

    cout << "Type in the radius of the circle: ";
    cin >> radius;
    cout <<"-------------------------------" << endl; 

    circum = 2*PI*radius;
    area = PI*(radius*radius);

    cout << "the area of the circle is: " << area << endl;
    cout << "the circumfrence of the circle is: " << circum << endl;

}