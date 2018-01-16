#include <iostream>
#include <cmath>
using namespace std;

float calculateStandardDeviation(float data[], int i);

int main()
{
    int i;
    cout << "Enter Number of elements: " << endl;
    cin >> i;
    float data[i];

    cout << "Enter elements (press enter after each one)" << endl;
    for(int j = 0; j < i; j++)
        cin >> data[j];

    cout << endl << "Standard Deviation = " << calculateStandardDeviation(data, i) << endl << endl;
    return 0;
}

float calculateStandardDeviation(float data[], int i)
{
    float sum = 0.0, mean, standardDeviation = 0.0;

    for(int k = 0; k < i; k++)
    {
        sum += data[k];
    }

    mean = sum/i;

    for(int k = 0; k < i; k++)
        standardDeviation += pow(data[k] - mean, 2);

    return sqrt(standardDeviation / i);
}