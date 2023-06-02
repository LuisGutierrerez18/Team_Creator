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
using namespace std;

class team
{
    private:
        double budget = 100.0; // Team Budget assigned to 100 by default
        int counter =0;
        static const int teamSize = 16;

        // Siguiendo ejemplo del profe 
        Team *teamList[teamSize]; // Pointers --> array 
    protected:
        string type; // type of player

    public:
        //string team[16]; // list of all the players selected in the team
        double price; 

        /* Team Constructor */
        team(string t)
        {
            
        }

        /* Methods */
        
        /*
         * Will receive the price of each player and subtract it from the club's budget
        */
        void adjust_budget(double max_price = 10.0) // This max_price is the maximum price of any individual player 
        {
            /* Test */
            cout << "Enter the price of the player: ";
            cin >> price;

            if(price <= max_price)
            {
                budget = budget - price;
                cout<< "Budget Left:" << budget;
            }
                
        }

        /*
         * Method will add all the players to the principal team list
        */
        void push_player()
        {
            int i = 0;
            string name;

            /* Test */
            while (i <= 16)
            {
                cout<< "Enter the number of the player: ";
                cin>> name;

                
                
                i++;
            }

            cout<<teamC;
        }

};