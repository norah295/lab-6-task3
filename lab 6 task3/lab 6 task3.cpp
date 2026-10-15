#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


double saraX, saraY;


double calDistance(double x2, double y2) {
    return sqrt(pow(x2 - saraX, 2) + pow(y2 - saraY, 2));
}


int evaluateDistance(double d1, double d2, double d3) {
    if (d1 <= d2 && d1 <= d3) return 1;
    else if (d2 <= d1 && d2 <= d3) return 2;
    else return 3;
}

int main() {
    srand(time(0));

    saraX = rand() % 100;
    saraY = rand() % 100;
    cout << "Sara's Location: (" << saraX << ", " << saraY << ")\n";

    double sup1X = rand() % 100, sup1Y = rand() % 100;
    double sup2X = rand() % 100, sup2Y = rand() % 100;
    double sup3X = rand() % 100, sup3Y = rand() % 100;

    cout << "Supermarket 1: (" << sup1X << ", " << sup1Y << ")\n";
    cout << "Supermarket 2: (" << sup2X << ", " << sup2Y << ")\n";
    cout << "Supermarket 3: (" << sup3X << ", " << sup3Y << ")\n";

   
    double d1 = calDistance(sup1X, sup1Y);
    double d2 = calDistance(sup2X, sup2Y);
    double d3 = calDistance(sup3X, sup3Y);

    cout << "Distance to Supermarket 1: " << d1 << endl;
    cout << "Distance to Supermarket 2: " << d2 << endl;
    cout << "Distance to Supermarket 3: " << d3 << endl;

    
    int nearest = evaluateDistance(d1, d2, d3);
    cout << "The nearest supermarket is Supermarket " << nearest << endl;

    return 0;
}