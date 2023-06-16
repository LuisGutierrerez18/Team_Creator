/*
 * Fantasy Team Creator Proyect player.h class
 * Luis Enrique Gutierrez
 *
 * For: Object Oriented Programming 2
 * Class will define an object type 'player' which contians all the information
 *
*/
#ifndef PLAYER_H
#define PLAYER_H

#include<iostream> // prints
#include <string>
using namespace std;


class Player {
    protected: // declaration of Protected variables
        string name; // player's name
        int rating; // player's rating
        string country; // player's country
        string position; // player's position
        int birthday; // player's birthday

    public:

        /* Contructor */
        /*player(string n, int rat, string count, string pos, int birth) {
            name = n;
            rating = rat;
            country = count;
            position = pos;
            birthday = birth;
        }*/
        // *! Getter and Setter Methods */

        /**
         * 'get_name' designed to get the name of the player object
         * Gives the name as an attribute of the object
         * 
         * @param
         * returns the name of the player Object as a string
        */
        string get_name(){
            return name;
        }

        /**
         * Setter method: 'set_name' designed to update the name of the player
         * Receives newName string parameter 
         * 
         * @param
         * returns newName as the name of the player object 
        */
        void set_name(string newName){
            // Data type: string
            name = newName;
        }

        /**
         * 'get_rating' designed to get the rating of the player object
         * Gives the rating as an attribute of the object
         * 
         * @param
         * returns the rating of the player Object as an int
        */
        int get_rating(){
            return rating;
        }

         /**
         * 'set_rating' designed to update the rating of the player
         * Receives newRating int as parameter 
         * 
         * @param
         * returns newRating (Data type:int) as the rating of the player object 
        */
        void set_rating(int newRating){
            // Data type: int
            rating = newRating;
        }

       /**
         * 'get_country' designed to get the country of origin of the player object
         * Gives the country as an attribute of the object
         * 
         * @param
         * returns the country of the player Object as an string
        */
        string get_country(){
            return country;
        }

         /**
         * 'set_country' designed to update the country of the player
         * Receives newCountry as string method parameter 
         * 
         * @param
         * returns newCountry (Data type:string) as the country of the player object 
        */
        void set_country(string newCountry){
            // Data type: string
            country = newCountry;
        }

      /**
         * 'get_position' designed to get the position of the player object
         * Gives the position as an attribute of the object
         * 
         * @param
         * returns the position of the player Object as an string
        */
        string get_position(){
            return position;
        }

        /**
         * 'set_country' designed to update the position of the player
         * Receives position as string method parameter 
         * 
         * @param
         * returns newPos (Data type:string) as the position of the player object 
        */
        void set_position(string newPos){
            position = newPos;
        }

        /**
         * 'get_position' designed to get the year of birth from the player object
         * Gives the birthday as an attribute of the object
         * 
         * @param
         * returns the birthday of the player Object as an int
        */
        int get_birthday(){
            return birthday;
        }

        /**
         * 'set_country' designed to update the year of birth of the player
         * Receives newBirth as int method parameter 
         * 
         * @param
         * returns newPos (Data type:int) as the birthday of the player object 
        */
        void set_birthday(int newBirth){
            birthday = newBirth;
        }

        /**
         * calc_age() will calculate the exact age of the player
         * Inputs the current year from the user, 
         * takes the year of birth from player and subtracts the information
         * Checks if the year of birth is valid or not
         * 
         * @param
         * returns the calculated age as an int 
        */ 
        int calc_age(){
            int year; // Current year
            cout<< "Enter the current year";
            cin >> year;

            int min_Age = 1978; // youngest year the player could have been born
            int age;

            cout << "Enter year of birth: ";
            cin >> birthday;

            if(birthday >= year || birthday <= min_Age) // Will check if the born year is a valid one
            {
                cout<< "Not valid year";
            }

            age = year - birthday; // Calculation to determine the age
            return age;
        }

        /**
         * This method would be used as polymorphism
         * Would indicate the action a playing is making
         * Example: If the player is a midfielder polymorphism would change the outcome of the method as: giving assists
         *
         * Makes the interaction more dynamic
         * 
         * @param
         * 
        */
        virtual void playing() = 0; // Using Abstract classes //


        /**
         * To_string converts (concatenates) information as string 
         * print out the information of the player object as a string
         * Includes the following player's name, rating, country and birthday
         * 
         * @param
         * returns a string representatation of the object's information
        */ 
        string to_string(){
            // stringstream ss;
            string playerInfo =  + "|  " + get_name() + " |    ";
            playerInfo += std::to_string(get_rating()) + " \t| ";
            playerInfo += get_country() + " |\t    ";
            playerInfo += std::to_string(get_birthday()) + "      | \n";
            return playerInfo;
        }

        string to_string(bool printTable) {
            string playerInfo = "";
            if (printTable) {
                playerInfo += " _____________________________________________________\n";
                playerInfo += "| Name\t     |  Rating  |   Country   | Year of Birth | \n";
                playerInfo += "|------------|----------|-------------|---------------| \n";
            }
            playerInfo += to_string();
            if (printTable) {
                playerInfo += " ----------------------------------------------------- \n\n";
            }
            return playerInfo;
        }

};

/* Note: the arrays declared above are for testing purposes */
/* Eventually would be implemented a method or matrice with the complete information of each player to increse */

#endif