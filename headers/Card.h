/*******************************************************************************
 * AUTHOR     : Jacob Campbell
 * PROJECT    : Card Game
 * DATE       : October 2022
 ******************************************************************************/

#include <vector>
#include <string>
using namespace std;


enum AbilityTiming
{
    NONE,
    START_OF_TURN,
    START_OF_BATTLE,
    END_OF_TURN,
    END_OF_BATTLE,
    ON_BUY,
    ON_SELL,
    FRIEND_BOUGHT,
    FRIEND_SOLD,
    FOOD_BOUGHT,
    ON_ROLL,
    ON_FAINT
};

enum PetAbility
{
    NONE,
    BUFF,
    DEBUFF,
    SNIPE,
    SUMMON
};
class Player;

class Card
{
    public :

    /******************************
    ** CONSTRUCTOR & DESTRUCTOR **
    ******************************/
    Card(vector<int> cost, string name,
         string      text);
    ~Card();

    virtual const void DisplayCard();


    private :
    string      name;           // Card name
    string      text;           // Flavor text or effect text for card
    int         cost;           // Gold req. to buy
};