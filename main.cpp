
#include <iostream>
using namespace std;

class dice
{
    public:
    int numberofsides;
    int numberofdices;
    dice (int numberofsides ,int numberofdices)
    {
            int rolls [numberofdices];
            
            for ( int x = 0 ; x < numberofdices ; x++)
            {
                int roll = rand() % numberofsides + 1;
                rolls [x] = roll;
                cout << endl << "The dice roll was:" << roll << endl;
            }
        }
};
int main()
{
    int numberofsides;
    int numberofdice;
    cout << "How many sides do you want the dice to have?" << endl ;
    cin >> numberofsides ;
    cout << "How many dices do you want to roll?" << endl ;
    cin >> numberofdice;
    dice roll (numberofsides , numberofdice) ;
    return 0;
}

