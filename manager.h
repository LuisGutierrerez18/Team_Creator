/*
 * Fantasy Team Creator Proyect manager.h class
 * Luis Enrique Gutierrez
 *
 * For: Object Oriented Programming 2
 * Class will define an specific object type. In this file: manager of the club
 * Midfielder attributes will be declared as assists and passing percentage
 *
*/

#include<iostream> // prints
#include <string>
using namespace std;

class Manager
{
    private:
        string current_club; // private variable which sotres the current club of the manager
        string last_name; // Manager's Last name

    public:

        /* Constructor */
        Manager(string club ,string lastN){
            current_club = club;
            last_name = lastN;
        }
        /* Getter and Setter Methods for the manager object */

        /**
         * 'get_shots_on_target' designed to get the current_club from the manager object
         * Receives the current_club as an attribute of the object
         * 
         * @param
         * returns the current_club of the player Object as an string data type
        */
        string get_current_club(){
            return current_club;
        }
        
        /**
         * Method: get_last_name returns the last name of the manager
         * 
         * @param
         * return last_name, data type: String 
        */
        string get_last_name(){
            return last_name;
        }

        /**
         * 'set_current_club' designed to update the value current_club of the manager object
         * Receives newClub as an string method parameter 
         * 
         * @param
         * returns newClub (Data type:int) as the current_club of the player object 
        */
        void set_current_club(string newClub){
            current_club = newClub;
        }

        /**
         * public 'search_manager' searchs for manager 
         * method will require an input from the user looking for a manager.
         * method will traverse through an array wilth coaches last names looking for
         * 
         * @param
         * return a string for manager 
        */
        void search_manager(){
            string manager_list[] = {"Guardiola", "Xavi", "Klopp", "Ancelloti", "Zidane", "Inzaghi", "Arteta"}; // Manager's list

            int manager_list_length = sizeof(manager_list)/sizeof(manager_list[0]); //Will return the length of manager list Array

            bool mangaer_found = false;

            // While loop: while manger is not found
            while(mangaer_found)
            {
                cout<< "Enter the last name of the Manager: \n";
                cin >> last_name;

                for(int i = 0; i < manager_list_length; i++) // traverse the array searching for the candidate
                {
                    if(last_name == manager_list[i]) // if found stops loops
                    {
                        cout<< last_name << " Was Found and Available \n";
                        mangaer_found = true;
                        break;
                    }
                    else
                    {
                        // If not found continue trying
                        cout<<"Keep Trying...";
                    }
                }
            }
        }
};