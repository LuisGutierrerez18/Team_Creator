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
using namespace std;


class goalkeeper
{
    // Private variables 
    private:
        int height;
        int saves;

    public:
        /* Getter and Setter Methods for the goalkeeper class */
        
        /*
         * Getter Method: 'get_Height' will return the height of the goalkeeper
        */ 
        int get_height()
        {
            return height;
        }

        /*
         * Setter Method: 'set_height' will update the value of height 
        */
        void set_height(int newHeight)
        {
            height = newHeight;
        }

        /*
         * Getter Method: 'get_Height' will return the height of the goalkeeper
        */ 
        int get_saves()
        {
            return saves;
        }

        /*
         * Setter Method: 'set_saves' will update the value of saves 
        */
        void set_saves(int newSave)
        {
            saves = newSave;
        }

        /*
         * Method will serve as a counter to continously updating the number of saves made by the goalkeeper
        */
        int add_num_saves()
        {
            return saves++;
        }

};
