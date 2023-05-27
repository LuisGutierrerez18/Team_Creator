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

class manager
{
    private:
        string current_club; // private variable which sotres the current club of the manager
        string last_name; // Manager's Last name

    public:
       
        /* Getter and Setter Methods for the manager object */ 
       
       /*
        * Method: 'get_current_club' will get and return the current club the manager is coaching 
       */
        string get_current_club()
        {
            return current_club;
        }

        /*
         * Method: 'set_current_club will update the value of current_club for the manager
        */
        void set_current_club(string newClub)
        {
            current_club = newClub;
        }

        /*
         * public 'search_manager' method will require an input from the user looking for a manager.
         * method will traverse through an array wilth coaches last names looking for 
        */
        void search_manager()
        {
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