/*
 * Fantasy Team Creator Proyect forward.h class
 * Luis Enrique Gutierrez
 *
 * For: Object Oriented Programming 2
 * Class will define an specific object type. In this file: the complete team
 * Will include an array in which every player would be added to.
 * Also the budget would be managed in this section.
*/

#include<iostream> // prints
#include <string>
#include "player.h"
#include "manager.h"
using namespace std;

class Team
{
    private:
        double budget; // Team Budget assigned to 100 by default
        int counter;
        static const int teamSize = 16;
        string nameOfTeam;

        // Siguiendo ejemplo del profe
        Player *teamList[teamSize]; // Pointers --> array
        Manager *manager; // Manager inlcuded
    public:
        //string team[16]; // list of all the players selected in the team
        double price;
        string type; // type of player
        /* Team Constructor */
        Team(string t){
            counter = 0;
            nameOfTeam = t;
        }

        /* Methods */

        /*
         * Will receive the price of each player and subtract it from the club's budget
        */
        void adjust_budget(double max_price = 10.0) { // This max_price is the maximum price of any individual player{
            /* Test */
            budget = 100.0;
            cout << "Enter the price of the player: ";
            cin >> price;

            if(price <= max_price)
            {
                budget = budget - price;
                
                cout<< "Budget Left:" << budget << "\n";
            }

        }

        /*
         * Method will add all the players to the principal team list
        */
        void push_player(){
            int i = 0;
            string name;

            /* Test */
            while (i <= 16)
            {
                cout<< "Enter the number of the player: ";
                cin>> name;



                i++;
            }

            cout<<name;
        }

        /*
         * Method will add all the players to the principal team list
        */
        void add_player(Player *player){
            teamList[counter] = player;
            counter++;
        }

        // TODO: Print the list of players (declare toString and print inside main)

        // Method will add the manager to the team
        void add_manager(Manager *newManager){
            manager = newManager;
        }

        // Since the nameOfTeam variable is not initialized or undefined
        // Getter method will give it a value
        string getTeamName(){
            return nameOfTeam;
        }

        // To String will print out the entire list of the players
        // iterating through the array
        string to_string(){
            string roster = "Team: " + getTeamName() + "\n";
            roster += "Manager: " + manager->get_last_name() + ", " + manager->get_current_club() + "\n";

            for(int i = 0;  i < counter; i++){
                roster += teamList[i]->to_string(); //getName() from Player class
            }

            return roster;
        }

};