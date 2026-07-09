#include <<iostream>>
#include <<string>>

using namespace std;
//Define a class named Player with private member variables for id, name, and score.
class Player {
    private:
    int id;
    string name;
    int score;

    //Implement a constructor that initialises the player item with default values.
    public:
    Player(){
        id = 1;
        name = "Player 1";
        score = 0;
    }

    //Implement another constructor that allows the user to initialise the player with specific values.
    Player(int newId, string newName, int newScore){
        id = newId;
        name = newName;
        score = newScore;
    }

    //Include member functions to display player details, and update player score.
    void displayDetails(){
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }

    void updateScore(int points){
        score = score + points;
    }
};

//In the main function, create Player objects using both constructors
int main() {
    Player player1;
    Player player2(2, "Mylena", 10;

    Player* ptrPlayer1 = &player1;
    Player* ptrPlayer2 = &player2;

    //and make sure to use pointers to manipulate the player details.
    ptrPlayer1->updateScore(10);
    ptrPlayer2->updateScore(20);

    //Display player details using pointers.

    cout << "Player 1:" << endl;
    ptrPlayer1->displayDetails();
    cout << endl;
    cout << "Player 2:" << endl;
    ptrPlayer2->displayDetails();


    return 0;
}