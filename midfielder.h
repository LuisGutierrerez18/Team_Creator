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
using namespace std;

class midfielder
{
    // Private variables 
    private:
        int assist;
        double passing_percentage;

    public:
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
        int add_num_saves()
        {
            return assist++;
        }

};