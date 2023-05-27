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
using namespace std;

class defender
{
    // Private variables 
    private:
        int interceptions;
        int own_goals;
        int cleansheet;

    public:
        /* Getter and Setter Methods for the defender class */
        
        /*
         * Getter Method: 'get_interceptions' will return the numnber of interceptions of the defender
        */ 
        int get_interceptions()
        {
            return interceptions;
        }

        /*
         * Setter Method: 'set_interceptions' will update the value of interceptions 
        */
        void set_interceptions(int newInter)
        {
            interceptions = newInter;
        }

        /*
         * Getter Method: 'get_own_goals' will return the the number of own goals conceded
        */ 
        int get_own_goals()
        {
            return own_goals;
        }

        /*
         * Setter Method: 'set_own_goal' will update the value of own goals  
        */
        void set_own_goal(int newOwnGoals)
        {
            own_goals = newOwnGoals;
        }

        /*
         * Getter Method: 'get_cleansheet' will return the the number of cleansheets reached
        */ 
        int get_cleansheet()
        {
            return cleansheet;
        }

        /*
         * Setter Method: 'set_cleansheet' will update the value of cleansheets 
        */
        void set_cleansheet(int newCleansheet)
        {
            cleansheet = newCleansheet;
        }

        /*
         * Method will serve as a counter to continously updating the number of cleansheet games reached by the defender
        */
        int add_num_cleansheet()
        {
            return cleansheet++;
        }

};