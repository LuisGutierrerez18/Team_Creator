/*
 * Fantasy Team Creator Proyect midfielder.h class
 * Luis Enrique Gutierrez
 *
 * For: Object Oriented Programming 2
 * Class will define an specific object type. In this file: midfielder
 * Midfielder attributes will be declared as assists and passing percentage
 *
*/

#include<iostream> // prints
#include <string>
#include "player.h"
using namespace std;

class Midfielder: public Player
{
    // Private variables
    private:
        int assist;
        double passing_percentage;

    public:

        /* Constructor */
        Midfielder(string n, int rat, string count, int bir, int as, int pas) {
            name = n;
            rating = rat;
            country = count;
            birthday = bir;
            assist = as;
            passing_percentage = pas;
        }

        /* Getter and Setter Methods for the midfielder class */

        /**
         * 'get_assist' designed to get the number of assists from the midfielder player object
         * Gives the assist as an attribute of the object
         * 
         * @param
         * returns the assist of the player Object as an int data type
        */
        int get_assist(){
            return assist;
        }

        /**
         * 'set_country' designed to update the value assist of the player object
         * Receives assist as an int method parameter 
         * 
         * @param
         * returns newAssist (Data type:int) as the assist of the player object 
        */
        void set_assist(int newAssist){
            assist = newAssist;
        }

        /**
         * 'get_passing_percentages' designed to get the passing_percentage from the midfielder player object
         * Gives the passing_percentage as an attribute of the object
         * 
         * @param
         * returns the passing_percentage of the player Object as an int data type
        */
        int get_passing_percentages(){
            return passing_percentage;
        }

        /**
         * 'set_country' designed to update the value assist of the player object
         * Receives assist as an int method parameter 
         * 
         * @param
         * returns newPass (Data type:int) as the passing_percentage of the player object 
        */
        void set_passing_percentage(int newPass){
            passing_percentage = newPass;
        }

        /**
         * Method will serve as a counter to continously updating the number of assists given by the player
         * assist is member and paramter of the midfielder class 
         * 
         * @param
         * returns the updated value of assist as an int 
        */
        int add_num_assists(){
            return assist++;
        }

        /**
         * Class being used using the polymorphism concept. Making the program more interactive
         * Tell the user the action the player is doing
         * Since is midfielder player is giving assists
         * 
         * @param
         * returns or prints out a representation of an action being made by the midfielder object
        */
        void playing(){
            cout << "Midfielder is giving assist to the forwards \n";
        }
};