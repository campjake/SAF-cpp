/*******************************************************************************
 * AUTHOR     : Jacob Campbell
 * PROJECT    : SAP
 * DATE       : October 2022
 ******************************************************************************/

#include <vector>
#include <string>
using namespace std;
class Player;

enum Timing
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

enum Effect
{
    NONE,
    BUFF,
    DEBUFF,
    SNIPE,
    SUMMON
};

// enum Friend
// {
//     GEOFFREY,
//     CHRIS,
//     KYLE,
//     RYAN,
//     JAKE,
//     JAMIE,
//     RJ,
//     JOSH,
//      .....

// };

enum Food
{
    APPLE,
    HONEY,
    COOKIE,
    GARLIC,
    CANNED_FOOD,
    CHILI,
    MUSHROOM,
    WEAKNESS,
    PEAR,
    SHAKE,
    WEIGHT,
    SLEEPING_PILL,
    MELON,
    PEANUTS

};

enum Type
{
    FRIEND_SIDE,
    FOOD_SIDE
};

class Card
{
    public :

    /******************************
    ** CONSTRUCTOR & DESTRUCTOR **
    ******************************/
    Card(int cost, string name, string text, Type cardType);
    ~Card();

    virtual const void DisplayCard();


    private :
    string      name;           // Card name
    string      text;           // Flavor text or effect text for card
    int         cost;           // Gold req. to buy
    Type        cardType;       // Friend or food    
};
