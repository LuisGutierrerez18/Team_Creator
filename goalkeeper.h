/*
 * Fantasy Team Creator Proyect goalkeeper.h class
 * Luis Enrique Gutierrez
 *
 * For: Object Oriented Programming 2
 * Class will define an specific object type. In this file: goalkeeper
 * Goalkeeper attributes will be declared as height and number of saves made
 *
*/

#include<iostream> // prints
#include <string>
#include "player.h"
using namespace std;


class Goalkeeper: public Player
{
    // Private variables
    private:
        int height;
        int saves;

    public:

        /* Constructor */
        Goalkeeper(string n, int rat, string cou, int bir, int h, int sa){
            name = n;
            rating = rat;
            country = cou;
            birthday = bir;
            height = h;
            saves = sa;
        }
        /* Constructor Ends */

        /* Getter and Setter Methods for the goalkeeper class */

         /**
         * 'get_goals' designed to get the height from the goalkeeper player object
         * Receives the height as an attribute of the object
         * 
         * @param
         * returns the height of the player Object as an int data type
        */
        int get_height(){
            return height;
        }

        /**
         * 'set_height' designed to update the value height of the goalkeeper player object
         * Receives newHeight as an int method parameter 
         * 
         * @param
         * returns newHeight (Data type:int) as the height of the player object 
        */
        void set_height(int newHeight){
            height = newHeight;
        }

        /**
         * 'get_saves' designed to get the saves from the goalkeeper player object
         * Receives the saves as an attribute of the object
         * 
         * @param
         * returns the saves of the player Object as an int data type
        */
        int get_saves(){
            return saves;
        }

        /**
         * 'set_saves' designed to update the value saves of the goalkeeper player object
         * Receives newSave as an int method parameter 
         * 
         * @param
         * returns newSave (Data type:int) as the saves of the player object 
        */
        void set_saves(int newSave){
            saves = newSave;
        }

        /**
         * Method will serve as a counter to continously updating the number of saves made by the goalkeeper
         * saves is member and paramter of the goalkeeper class 
         * 
         * @param
         * returns the updated value of saves as an int 
        */
        int add_num_saves(){
            return saves++;
        }
//
        /**
         * Method overloading of the method 'add_num_saves'
         * Performs a cast from int to double data type of saves variable
         * 
         * @param
         * return the saves of goalkeepr as a double data type
         */ 
        int add_num_saves(double numSaves){
            saves += static_cast<int>(numSaves); // Cast which changes the value of a double to int
            return saves;
        }

        /**
         * Class being used by the polymorphism concept. Making the program more interactive
         * Tell the user the action the player is doing
         * Since is goalkeeper player is preventing goals
         * 
         * @param
         * prints out the action being done by the goalkeeper
        */
        void playing(){
            cout << "Goalkeeper is preventing goals for his team \n";
        }

};
