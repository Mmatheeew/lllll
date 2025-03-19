#include <iostream>
#include <cmath>
using namespace std;
double pryamugS(double width, double height) {
    return width * height;
}
double pryamugP(double width, double height) {
    return 2 * (width + height);
}
double pryamugD(double width, double height) {
    return sqrt(width * width + height * height);
}

int main() {
    double width, height;
    cout << "Write Width and Height";
    cin >> width >> height;
    if (width <= 0 || height <=0) {
        cout << "Error" << endl;
    }else{
        cout << "S: " << pryamugS(width, height) << endl;
        cout << "P: " << pryamugP(width, height) << endl;
        cout << "D: " << pryamugD(width, height) << endl;
    }
    return 0;
}
