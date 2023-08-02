
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    double Rainfall[12];
    double Total;
    double Smallest;
    double Largest = 0.0;
    double Average;
    int month;
    int month2;

    cout << "Please input the total rainfall for each of the 12 months" << endl;


    for(int i = 0; i < 12; i++)
    {
        do{
            cout << "Please input for month #" << (i+1) << endl;
            cin >> Rainfall[i];

            if(Rainfall[i] <= 0.0) {
                cout << "Invalid input. Please enter a number that is positive." << endl;
            }

        }while (Rainfall[i] <= 0.0);
    }

    Smallest = Rainfall[0];
    Largest = Rainfall[0];

    for(int i = 0; i < 12; i++)
    {
        if(Rainfall[i] < Smallest)
        {
            Smallest = Rainfall[i];
            month = i;
        }

        if(Rainfall[i] > Largest)
        {
            Largest = Rainfall[i];
            month2 = i;
        }

        Total += Rainfall[i];
        Average = Total / 12;
    }

    cout << "The largest rainfall was for Month # " << month2 + 1 <<
    " with " << Largest << endl;

    cout << "The smallest rainfall was for Month # " << month + 1<<
    " with " << Smallest << endl;

    cout << "Total Rainfall was " << Total << endl;
    cout << "Average rainfall was " << Average << endl;
    

    return 0;
}
