#include <vector>
#include <string>
#include <random>
using namespace std;

class Card;
class Pet;
class Shop;
class Battle;

class Player
{   
    public : 

    Player(string name, vector<Card*> team);
    ~Player();

    /***************************************
    *         Setters - Player Status      *
    * *************************************/
   // Abandon pets - Quit game
   void Abandon();

    /***************************************
    *         Getters - Player Status      *
    * *************************************/
   bool GameOver() const;
   bool Victory() const;


    /***************************************
    *           Shop Interactions          *
    * *************************************/
    void EnterShop(int turn, Shop* petShop);

    // Buy a card from the shop
    Card* Buy();
    // Sell a pet from the team
    int   Sell(Pet* sellPet);

    void EndTurn();


    private :  
    string          name;
    int             health;
    int             turn;
    int             wins;
    bool            victory;
    bool            gameOver;
    vector<int>     v_Gold;
    vector<Pet>     v_Team;
    Battle*         currentBattle;

};