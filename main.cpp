/*
 * Fantasy Team Creator Proyect main class
 * Luis Enrique Gutierrez
 *
 * For: Object Oriented Programming 2
 * Proyect designed as an interactive tool in which the user creates his own soccer team.
 * Includes many features as the type of positions, managers and club budget.
*/

#include<iostream> // print

#include "player.h"
#include "goalkeeper.h"
#include "defender.h"
#include "midfielder.h"
#include "attacker.h"
#include "manager.h"
#include "team.h"

using namespace std;

int main()
{
    cout << "Welcome to the Team Creator Fantasy \n";
    cout << "\n";
    cout << "Rules are Simple: You Enter The Name We Add it to the Team List \n";

    // ! Creating our player objects

    Player *gk = new Goalkeeper("Ter Stegen", 88, 1992, 182, 100);
    Player *def = new Defender("Araujo", 83, 1999, 40, 2, 30);
    Player *mid = new Midfielder("de Jong", 87, 1997, 21, 88);
    Player *fwrd = new Attacker("Messi", 94, 1988, 95, 50, 120);
    Manager *mngr = new Manager("Manchester City", "Guardiola");

    // TODO: Change name of team.
    Team myTeam("Lobitos"); // Creates the team object in which evrything would be stored

    // ! Adding names to the list
    // * Hi
    // ? Hello
    // 

    // Using abstract classes method and polymorphism calling the method playing()
    gk->playing();
    def->playing();
    mid->playing();
    fwrd->playing();

    // TODO: Add Manager --> Added COMPLETE
   
    // ! DONE  

    myTeam.add_player(gk);
    myTeam.add_player(def);
    myTeam.add_player(mid);
    myTeam.add_player(fwrd);
    myTeam.add_manager(mngr);

    // Adjusts the budget of the team
    myTeam.adjust_budget();
        
    // string input; // Variable for input value
    // cout<< "Enter Player's Name";
    // cin>> input;

    // myTeam.search_Player(input);

    // myTeam.push_player(input);
    
    return 0;
}