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
        Attacker(string n, int rat,string origin, int bir, int vel, int goal, int shot){
            name = n;
            rating = rat;
            country = origin;
            birthday = bir;
            velocity = vel;
            goals = goal;
            shots_on_target = shot;
        }
        /* Getter and Setter Methods for the forward class */

       /**
         * 'get_interceptions' designed to get the velocity from the attacker player object
         * Receives the velocity as an attribute of the object
         * 
         * @param
         * returns the velocity of the player Object as an int data type
        */
        int get_velocity(){
            return velocity;
        }

       /**
         * 'set_velocity' designed to update the value velocity of the player object
         * Receives newVel as an int method parameter 
         * 
         * @param
         * returns newVel (Data type:int) as the velocity of the player object 
        */
        void set_velocity(int newVel){
            velocity = newVel;
        }

        /**
         * 'get_goals' designed to get the goals from the attacker player object
         * Receives the goals as an attribute of the object
         * 
         * @param
         * returns the goals of the player Object as an int data type
        */
        int get_goals(){
            return goals;
        }

       /**
         * 'set_goasl' designed to update the value goals of the player object
         * Receives newGoals as an int method parameter 
         * 
         * @param
         * returns newGoals (Data type:int) as the goals of the player object 
        */
        void set_goasl(int newGoals){
            goals = newGoals;
        }

       /**
         * 'get_shots_on_target' designed to get the shots_on_target from the attacker player object
         * Receives the shots_on_target as an attribute of the object
         * 
         * @param
         * returns the shots_on_target of the player Object as an int data type
        */
        int get_shots_on_target() {
            return shots_on_target;
        }

        /**
         * 'set_shots_on_target' designed to update the value shots_on_target of the player object
         * Receives newShot_tar as an int method parameter 
         * 
         * @param
         * returns newShot_tar (Data type:int) as the shots_on_target of the player object 
        */
        void set_shots_on_target(int newShot_tar){
            shots_on_target = newShot_tar;
        }

         /**
         * Method will serve as a counter to continously updating the number of goals scored by the player
         * goals is member and paramter of the attacker class 
         * 
         * @param
         * returns the updated value of goals as an int 
        */
        int add_num_goals(){
            return goals++;
        }

        /**
         * Class being used using the polymorphism concept. Making the program more interactive
         * Tell the user the action the player is doing
         * Since is forward player is scoring goals
         * 
         * @param
         * prints out the action being done by the attacker(forward)
        */
        void playing(){
            cout << "Forward is scoring many goals for his team \n";
        }
};