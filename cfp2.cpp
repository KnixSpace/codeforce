#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int num_card, p1 = 0, p2 = 0;
    cin >> num_card;
    int card[num_card];
    for (int i = 0; i < num_card; i++)
    {
        cin >> card[i];
    }

    sort(card, card + num_card, greater<int>());
    int j = num_card - 1;
    while (j >= 0)
    {
        if (j % 2 == 0)
        {
            p1 += card[j];
        }
        else
        {
            p2 += card[j];
        }
        j--;
    }

    cout << p1 << " " << p2;
}