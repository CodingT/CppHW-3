#include <iostream>

using namespace std;

int main()
{
    double wins, lose, total, prstg, bestPrstg=0, worsePrstg=0;
    int id, bestId, worseId, numTeams=0;


    cout << "Please enter team ID number " << endl;
    cin >> id;

while (id > 0) {

    cout << " Enter number of won games " << endl;
    cin >> wins;

    cout << " Enter number of lost games " << endl;
    cin >> lose;

    total = wins + lose;
    prstg = wins / total;

        cout << endl << endl;

    cout << "Team  " << id <<endl;
    cout << "Wins  " << wins << "    " << "Losses  " << lose << endl;

    cout << "Total number of games played is  " << wins + lose << endl;
     if ( total == 20 )
        cout << "The season is finished" << endl;
     if ( total < 20 )
        cout << 20 - total << "  Games left " << endl;

    cout << "The winning percentage is  " << prstg << endl;

if ( wins >= lose )
    cout << "The team is " << wins - lose << " games above 0.50000 " << endl;
if ( wins < lose )
    cout << "The team is " << lose - wins << " games below 0.50000 " << endl;

numTeams++;



    cout << endl << endl;

cout << "Please enter team ID number or press 0 to STOP " << endl;
    cin >> id;



}
 cout << endl << endl;

cout << " Total number of teams in the league " << numTeams << endl;

 // if (prstg > bestPrstg){
 //   bestId = id;
   // bestPrstg = prstg;}



// cout << " The best team is number " << bestId << "  with "<< bestPrstg << " Winning percentage " << endl;


    return 0;
}
