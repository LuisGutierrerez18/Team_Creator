/*
 * Fantasy Team Creator Proyect forward.h class
 * Luis Enrique Gutierrez 
 * 
 * For: Object Oriented Programming 2
 * Class will define an specific object type. In this file: forward
 * Forward player attributes will be declared as height and number of saves made
 *  
*/

#include<iostream> // prints 
#include <string>
using namespace std;

class forward
{
    // Private variables 
    private:
        int velocity;
        int goals;
        int shots_on_target;

    public:
        /* Getter and Setter Methods for the forward class */
        
        /*
         * Getter Method: 'get_velocity' will return the maximum velociity reached by the forward
        */ 
        int get_velocity()
        {
            return velocity;
        }

        /*
         * Setter Method: 'set_velocity' will update the value of velocity 
        */
        void set_velocity(int newVel)
        {
            velocity = newVel;
        }

        /*
         * Getter Method: 'get_goals' will return the the number of goals scored
        */ 
        int get_goals()
        {
            return goals;
        }

        /*
         * Setter Method: 'set_goasl' will update the value of goals scored
        */
        void set_goasl(int newGoals)
        {
            goals = newGoals;
        }

        /*
         * Getter Method: 'get_shots_on_target' will return the the number of shots on target
        */ 
        int get_shots_on_target()
        {
            return shots_on_target;
        }

        /*
         * Setter Method: 'set_shots_on_target' will update the value of shots on target 
        */
        void set_shots_on_target(int newShot_tar)
        {
            shots_on_target = newShot_tar;
        }

        /*
         * Method will serve as a counter to continously updating the number of goals socred by the attacker
        */
        int add_num_goals()
        {
            return goals++;
        }

};