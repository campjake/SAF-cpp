// #include <string>
// #include <vector>
#include "Card.h"
using namespace std;

class Player;
class Battle;
class Card;

class Friend : public Card
{
	public : 
	Friend(int cost, string name, string text,
		   int attack, int hp, int level,
		   Timing trigger, Effect friendEffect);
	~Friend();

    /***************************************
    *           Shop Interactions          *
    * *************************************/
	void Speak() const;
	void Faint();
	void Eat();
	void Move();
	void Merge();
	void LevelUp();

	/***************************************
    *           Battle Interactions        *
    * *************************************/
   void Attack();
   void TriggerEffect(Effect friendEffect, Timing trigger);


	private :
	string name;
	int    cost;
	string text;
	int    attack;
	int    hp;
	int	   level;
	Timing trigger;
	Effect friendEffect;
};

class Chris : public Friend
{
	public : 
	Chris(int cost, string name, string text,
		   int attack, int hp, int level,
		   Timing trigger, Effect friendEffect);
};

class Food : public Card
{
    public :
	Food(int cost, string name, string text);
	~Food();

	virtual const void DisplayCard();

	private :
	string name;
	int    cost;
	string text;
	Timing trigger = ON_BUY;

};