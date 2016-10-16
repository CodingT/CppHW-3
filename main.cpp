#include <iostream>

using namespace std;

int main()
{
    cout << " HW#3 Compute Baseball statistics. "<< endl << endl;

    double prctg, bestPrctg=0;
    int id, wins, lose, total, remGames, above, below, bestId, bestAbove=0,  numTeams=0;

    cout.setf(ios::fixed, ios::floatfield);        // specify the number of decimal places (5 digits after a period)
    cout.precision(5);

    cout << "Please enter team ID number " << endl;
    cin >> id;

while (id >=0) {                             // read until user enters a negative number for STOP the program

    cout << " Enter number of won games " << endl;
    cin >> wins;

    cout << " Enter number of lost games " << endl;
    cin >> lose;

    cout << endl << endl;


    total = wins + lose;              // total games played
    prctg = (double) wins / total;   // winning percentage, assigning double to receive a decimal answer
    above = wins - lose;            // number of games above 0.50000
    below = lose - wins;           // number of games below 0.50000
    remGames = 20 - total;        // number of remaining games of 20 games season


    cout << "Team  " << id <<endl;
    cout << "Wins  " << wins << "    " << "Losses  " << lose << endl;

    cout << "Total number of games played is  " << total << endl;
     if ( total == 20 )
        cout << "The season is finished !" << endl;
     if ( total < 20 )
        cout << remGames << "  Games left " << endl;

    cout << "The winning percentage is  " << prctg << endl;

        if ( wins >= lose )
    cout << "The team is " << above << " games above 0.50000 " << endl;
        if ( wins < lose )
    cout << "The team is " << below << " games below 0.50000 " << endl<< endl;


if (total != 20) {        //  Condition if team will wins all of the remaining games
    cout << "If team will wins all of the " << remGames <<
    " remaining games, winning percentage will be " <<  (double) (wins + remGames) / 20 << endl;

     if (wins = wins + remGames) {
       above = wins - lose;
       below = lose - wins;

        if ( wins >= lose )
    cout << "The team will be " << above << " games above 0.50000 " << endl;
        else if ( wins < lose )
    cout << "The team will be " << below << " games below 0.50000 " << endl;
     }
}

numTeams++;  // counting total number of teams

    if (prctg > bestPrctg){      // track of the team with the best winning percentage
        bestId = id;
        bestPrctg = prctg;
    }

    if (above > bestAbove){      // track of the team with the most games above 0.50000
        bestId = id;
        bestAbove = above;
    }

    cout << endl << endl;

cout << "Please enter team ID number or negative value to Quit the program " << endl;
    cin >> id;

}
 cout << endl << endl;

cout << " Total number of teams in the league " << numTeams << endl;

    cout <<" The team # " << bestId << " has best winning percentage of " << bestPrctg << endl;
    cout <<" The team # " << bestId << " has most games above 0.50000 of " << bestAbove << endl;

    return 0;
}
