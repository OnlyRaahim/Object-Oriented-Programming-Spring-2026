#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Game
{
private:
    int players;
    int yourHits;
    int enemyHits;

public:
    Game()
    {
        srand(time(0));
        players = rand() % 5 + 1;   // Random players (1-5)
        yourHits = 0;
        enemyHits = 0;
    }

    void play()
    {
        cout << "Total No. Of Players in your team: " << players << endl
             << endl;

        for (int i = 0; i < players; i++)
        {
            int num1 = rand() % 5 + 1;
            int num2 = rand() % 5 + 1;

            cout << "Pair of numbers:" << endl;
            cout << "Number1: " << num1 << endl;
            cout << "Number2: " << num2 << endl;

            if (num1 == num2)
            {
                cout << "Enemy got hit by your team!" << endl;
                yourHits++;
            }
            else
            {
                cout << "You got hit by the enemy team!" << endl;
                enemyHits++;
            }

            cout << endl;
        }
    }

    void result()
    {
        if (yourHits > enemyHits)
            cout << "Game Over! You won" << endl;
        else if (enemyHits > yourHits)
            cout << "Game Over! Enemy won" << endl;
        else
            cout << "Game Over! Match Draw" << endl;
    }
};

int main()
{
    Game g;

    g.play();
    g.result();

    return 0;
}