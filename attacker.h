/*
 * Fantasy Team Creator Proyect forward.h class
 * Luis Enrique Gutierrez
 *
 * For: Object Oriented Programming 2
 * Class will define an specific object type. In this file: forward
 * Forward player attributes will be declared as height and number of saves made
 *
*/

/* File Name changed from forward.h to attacker.h */

#include<iostream> // prints
#include <string>
#include "player.h"
using namespace std;

class Attacker: public Player
{
    // Private variables
    private:
        int velocity;
        int goals;
        int shots_on_target;

    public:

        /* Constructor */
        Attacker(string n, int rat, int bir, int vel, int goal, int shot){
            name = n;
            rating = rat;
            birthday = bir;
            velocity = vel;
            goals = goal;
            shots_on_target = shot;
        }
        /* Getter and Setter Methods for the forward class */

        /*
         * Getter Method: 'get_velocity' will return the maximum velociity reached by the forward
        */
        int get_velocity(){
            return velocity;
        }

        /*
         * Setter Method: 'set_velocity' will update the value of velocity
        */
        void set_velocity(int newVel){
            velocity = newVel;
        }

        /*
         * Getter Method: 'get_goals' will return the the number of goals scored
        */
        int get_goals(){
            return goals;
        }

        /*
         * Setter Method: 'set_goasl' will update the value of goals scored
        */
        void set_goasl(int newGoals){
            goals = newGoals;
        }

        /*
         * Getter Method: 'get_shots_on_target' will return the the number of shots on target
        */
        int get_shots_on_target() {
            return shots_on_target;
        }

        /*
         * Setter Method: 'set_shots_on_target' will update the value of shots on target
        */
        void set_shots_on_target(int newShot_tar){
            shots_on_target = newShot_tar;
        }

        /*
         * Method will serve as a counter to continously updating the number of goals socred by the attacker
        */
        int add_num_goals(){
            return goals++;
        }

        /*
         * Class being used using the polymorphism concept. Making the program more interactive
         * Tell the user the action the player is doing
         * Since is forward player is scoring goals
        */
        void playing(){
            cout << "Forward is scoring many goals for his team";
        }
};