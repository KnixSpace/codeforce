#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int num_games, p1, p2;
    string player_won;
    cin >> num_games;
    cin >> player_won;
    for (int i = 0; i <= player_won.length(); i++)
    {
        if (player_won[i] == 'A')
        {
            p1 += p1;
        }
        else
        {
            p2 += p2;
        }
    }

    if (p1 > p2)
    {
        cout << "Anton";
    }
    else if (p1 < p2)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}