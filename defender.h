/*
 * Fantasy Team Creator Proyect defender.h class
 * Luis Enrique Gutierrez
 *
 * For: Object Oriented Programming 2
 * Class will define an specific object type. In this file: defender
 * Goalkeeper attributes will be declared as height and number of saves made
 *
*/

#include<iostream> // prints
#include <string>
#include "player.h"
using namespace std;

class Defender: public Player
{
    // Private variables
    private:
        int interceptions;
        int own_goals;
        int cleansheet;

    public:

        /* Constructor */
        Defender(string n, int rat, string from, int bir, int inter, int og, int clean) {
            name = n;
            rating = rat;
            country = from;
            birthday = bir;
            interceptions = inter;
            own_goals = og;
            cleansheet = clean;
        }

        /* Getter and Setter Methods for the defender class */

        /**
         * 'get_interceptions' designed to get the interceptions from the defender player object
         * Receives the interceptions as an attribute of the object
         * 
         * @param
         * returns the interceptions of the player Object as an int data type
        */
        int get_interceptions(){
            return interceptions;
        }

         /**
         * 'set_interceptions' designed to update the value interceptions of the player object
         * Receives newInter as an int method parameter 
         * 
         * @param
         * returns newInter (Data type:int) as the interceptions of the player object 
        */
        void set_interceptions(int newInter){
            interceptions = newInter;
        }

        /**
         * 'get_interceptions' designed to get the number of ow_goals from the defender player object
         * Receives the ow_goals as an attribute of the object
         * 
         * @param
         * returns the ow_goals of the player Object as an int data type
        */
        int get_own_goals(){
            return own_goals;
        }

         /**
         * 'set_own_goal' designed to update the value own_goals of the player object
         * Receives newOwnGoals as an int method parameter 
         * 
         * @param
         * returns newOwnGoals (Data type:int) as the own_goals of the player object 
        */
        void set_own_goal(int newOwnGoals){
            own_goals = newOwnGoals;
        }

       /**
         * 'get_interceptions' designed to get the number of cleansheet from the defender player object
         * Receives the cleansheet as an attribute of the object
         * 
         * @param
         * returns the cleansheet of the player Object as an int data type
        */
        int get_cleansheet(){
            return cleansheet;
        }

        /*
         * Setter Method: 'set_cleansheet' will update the value of cleansheets
        */
        void set_cleansheet(int newCleansheet){
            cleansheet = newCleansheet;
        }

         /**
         * Method will serve as a counter to continously updating the number of cleansheets reached by the player
         * cleansheet is member and paramter of the defender class 
         * 
         * @param
         * returns the updated value of cleansheet as an int 
        */
        int add_num_cleansheet(){
            return cleansheet++;
        }

        /**
         * Class being used by the polymorphism concept. Making the program more interactive
         * Tell the user the action the player is doing
         * Since is Defender player is keeping cleansheets
         * 
         * @param
         * returns or prints out a representation of an action being made by the defender object
        */
        void playing(){
            cout << "Defender is keeping many cleansheets for his team \n";
        }
};