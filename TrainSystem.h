#pragma once
class Train
{
private:
    int _number;
    string _departureTime;
    string _destinationStation;

public:

    void SetTrain(int size, vector<Train>& trains)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "\nEnter your " << i + 1 << " train: \n";

            Train newTrain;
            cin >> newTrain._number;
            cin >> newTrain._departureTime;
            cin >> newTrain._destinationStation;

            trains.push_back(newTrain);
        }
    }

    void PrintAll(vector<Train>& trains)
    {
        if (trains.empty())
        {
            throw exception("No trains!");
        }
        else
        {
            for (const auto& i : trains) 
            {
                cout << "Number: " << i._number << endl;
                cout << "Departure time: " << i._departureTime << endl;
                cout << "Destination station: " << i._destinationStation << endl;
            }
        }
    }

    void PrintBySearch(int search_num, vector<Train>& trains)
    {
        if (trains.empty())
        {
            throw exception("No trains!");
        }
        else
        {
            for (const auto& i : trains)
            {
                if (search_num == i._number)
                {
                    cout << "Number: " << i._number << endl;
                    cout << "Departure time: " << i._departureTime << endl;
                    cout << "Destination station: " << i._destinationStation << endl;
                }
            }
        }
    }
};