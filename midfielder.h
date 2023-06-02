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
        Midfielder(string n, int rat, int bir, int as, int pas)
        {
            name = n;
            rating = rat;
            birthday = bir;
            assist = as;
            passing_percentage = pas;
        }

        /* Getter and Setter Methods for the midfielder class */

        /*
         * Getter Method: 'get_assist' will return the assists made by the midfielder
        */
        int get_assist()
        {
            return assist;
        }

        /*
         * Setter Method: 'set_assist' will update the value of assists
        */
        void set_assist(int newAssist)
        {
            assist = newAssist;
        }

        /*
         * Getter Method: 'get_passing_percentages' will return the passing percentage of the midfielder
        */
        int get_passing_percentages()
        {
            return passing_percentage;
        }

        /*
         * Setter Method: 'set_passing_percentage' will update the value of passing percentage
        */
        void set_passing_percentage(int newPass)
        {
            passing_percentage = newPass;
        }

        /*
         * Method will serve as a counter to continously updating the number of assists given by the player
        */
        int add_num_assists()
        {
            return assist++;
        }

        /*
         * Class being used using the polymorphism concept. Making the program more interactive
         * Tell the user the action the player is doing
         * Since is midfielder player is giving assists
        */
        void playing()
        {
            cout << "Midfielder is giving assist to the forwards";
        }
};