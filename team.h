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
         * Public search_player method will search for a desired player
         * Generate a response if the player was found
        */
        void search_player(string *playerList, int &index){
            /* List of available goalkeepers */
            string name;
            string goalKeeperList[] = {"Ter Stegen", "Courtois", "Donnaruma", "Ederson", "Pope"}; // Array with the names of goalkeepers
            int length_GK_List = sizeof(goalKeeperList)/sizeof(goalKeeperList[0]); //Will return the length of goalkeer Array
            // And will be used for the for loop transversing

            /* List of available defenders */
            string defenderList[] = {"Van Dijk", "Ramos", "Trippier", "Balde", "Maguire", "Araujo", "Hakimi", "Alaba", "Christensen", "Stones"};
            int length_def_List = sizeof(defenderList)/sizeof(defenderList[0]); //Will return the length of defender Array
            // And will be used for the for loop transversing

            /* List of avaiable midfielders */
            string midfielderList[] = {"de Jong", "De Bruyne", "Bellingham", "Pedri", "Gavi", "Kroos", "Modric", "Saka", "Kimmich", "Gundogan"};
            int length_mid_List = sizeof(defenderList)/sizeof(defenderList[0]); //Will return the length of midfielder Array
            // And will be used for the for loop transversing

            // List of avaible attacker
            string attackerList[] = {"Messi", "Demeble", "Lewandowski", "Haaland", "Mbappe", "Salah", "Neymar", "Lukaku","Ronaldo"};
            int length_frwd_List = sizeof(defenderList)/sizeof(defenderList[0]); //Will return the length of attacker Array
            // And will be used for the for loop transversing

            cout<<"Be advised to use player's last name \n"; // Use only last name of the player
            cout<<"\nEnter the player's name: ";
            cin >> name;

            bool playerFound = false; // the default return value for searching a player will be false until player is found

            // For loop which will traverse through array looking for player
            for(int i = 0; i < length_GK_List; i++)
            {
                if(name == goalKeeperList[i]) // Once traversed will look at each index looking for the name
                {
                    cout<< name << " Was Found and Available \n";
                    playerFound = true;
                    break;
                }
            }

            // if not found will repeat process and search on the defenders array
            if(!playerFound){
                for(int i = 0; i < length_def_List; i++)
                {
                    if(name == defenderList[i]) // Once traversed will look at each index looking for the name
                    {
                        cout<< name << " Was Found and Available\n";
                        cout<<"\nHas been succesfully added to your team";
                        playerFound = true;
                        break;
                    }
                }
            }

            // if not found will repeat process and search on the midfielders array
            if(!playerFound){
                for(int i = 0; i < length_mid_List; i++)
                {
                    if(name == midfielderList[i]) // Once traversed will look at each index looking for the name
                    {
                        cout<< name << " Was Found and Available \n";
                        cout<<"Has been succesfully added to your team";
                        playerFound = true;
                        break;
                    }
                }
            }

            // if not found will repeat process and search on the attackers array
            if(!playerFound){
                for(int i = 0; i < length_frwd_List; i++)
                {
                    if(name == attackerList[i]) // Once traversed will look at each index looking for the name
                    {
                        cout<< name << " Was Found and Available \n";
                        cout<<"Has been succesfully added to your team";
                        playerFound = true;
                        break;
                    }
                }
            }
            
            // Finally
            // if the player is not found on any of the arrays then it will display a message saying the player was not found
            if(!playerFound){
                cout<< "Player Was NOT Found \n";
            }
            if (playerFound) {
                playerList[index] = name;
                index++;
            }
        }
        /*
         * Will receive the price of each player and subtract it from the club's budget
        */
        void adjust_budget(double max_price = 10.0) { // This max_price is the maximum price of any individual player{
            /* Test */
            budget = 100.0;
            cout << "\nEnter the price of the player: ";
            cin >> price;

            if(price <= max_price)
            {
                budget = budget - price;
                
                cout<< "Budget Left: " << budget << "\n";
            }

        }

        /*
         * Method will add all the players to the principal team list
        */
        void push_player(){
            int i = 0;
            string playerList[5];
            int index = 0;

            /* Test */
            while (i <= 4)
            {
                cout<<"\n";
                search_player(playerList,index);

                i++;
            }

            cout<<"\nList of names Added: \n";
            for (int i = 0; i < index; i++) {
                cout << playerList[i] << endl;
            }
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
            string roster = "|Team: " + getTeamName() + "\n";
            roster += "|Manager: " + manager->get_last_name() + ", " + manager->get_current_club() + "\n";

            for(int i = 0;  i < counter; i++){
                roster += teamList[i]->to_string(); //getName() from Player class
            }

            return roster;
        }

};