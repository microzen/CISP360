#include <cmath>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double diameter = 0;
    const double size = 14.125;
    int slicse;

    cout << "Input the diameter of pizza in inches: ";
    cin >> diameter;
    slicse = ((pow((diameter / 2), 2) * M_PI) / size);
    cout << "The pizza can be cut into " << slicse << " slices" << endl;
    return 0;

    // Input the diameter of pizza in inches: 10
    // The pizza can be cut into 5 slices%
}
