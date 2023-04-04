#include <iostream>
#include <vector>
#include <string>
#include <exception>
using namespace std;
#include "TrainSystem.h"

int main()
{
    try
    {
        Train train;
        vector<Train> trains;

        train.SetTrain(2, trains);
        cout << endl;

        train.PrintAll(trains);
        cout << endl;

        cout << "Enter number of train to search: ";
        int num;
        cin >> num;
        train.PrintBySearch(num, trains);
    }
    catch (exception& ex)
    {
        cerr << ex.what();
    } 
}
