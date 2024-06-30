#include <iostream>
using namespace std;

string map[6][10] = {
    {"0", "1", "0", "0", "0", "1", "0", "1", "1", "1"},
    {"1", "1", "0", "0", "0", "0", "0", "1", "0", "1"},
    {"0", "0", "0", "0", "0", "1", "0", "1", "0", "1"},
    {"1", "1", "0", "0", "0", "1", "0", "1", "0", "1"},
    {"0", "1", "0", "0", "0", "0", "0", "1", "0", "1"},
    {"0", "1", "0", "0", "0", "1", "0", "1", "0", "1"},
};
string PlayerMap[6][10] = {
    {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
    {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
    {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
    {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
    {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
    {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0"},
};

int main() {
    cout << "BattleShip" << endl;
    cout << "The top right corner of the map is (1,1)" << endl;
    cout << "The bottom left corner of the map is (6,10) \n " << endl;
    int x;
    int y;
    int guessCounter = 0;
    bool gameOver = false;
    while (gameOver == false) {
        cout << "Guess a Y location location on the map: "; //dont mind the obvious mistake, this was just so i didnt have to change as much
        cin >> x;
        cout << "\n Guess a X location location on the map: ";
        cin >> y;
        x -= 1;
        y -= 1;
        if (map[x][y] == "1") {
            cout << "Hit! \n";
            PlayerMap[x][y] = "1";
            guessCounter++;
        } else if (map[x][y] == "0") {
            cout << "Miss! \n";
            guessCounter++;
        } else{
            cout << "Error! \n";
        }

        for (int i = 0; i < 6 ; i++) {
            for (int j = 0; j < 10; j++) {
                cout << "[" << PlayerMap[i][j] << "]";
            }
            cout << endl;
        }
        cout << " \n Guesses: " << guessCounter << " \n";
        if (guessCounter >= 20) {
            gameOver = true;
        }
   };


    

    return 0;
}
