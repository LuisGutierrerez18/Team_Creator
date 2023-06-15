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

        /*
         * Getter method: 'get_name' designed to get the name of the player
        */
        string get_name(){
            return name;
        }

        /*
         * Setter method: 'set_name' designed to update the name of the player
        */
        void set_name(string newName){
            // Data type: string
            name = newName;
        }

        /*
         * Getter method: 'get_rating' which will return the rating of the player
        */
        int get_rating(){
            return rating;
        }

        /*
         * Setter method 'set_rating' will update the rating value
        */
        void set_rating(int newRating){
            // Data type: int
            rating = newRating;
        }

        /*
         * Getter Method: 'get_country' will return the country of origign of the player
        */
        string get_country(){
            return country;
        }

        /*
         * Setter method 'set_country' will update the value of country
        */
        void set_country(string newCountry){
            // Data type: string
            country = newCountry;
        }

        /*
         * Getter method 'get_position' will return the position of the player
        */
        string get_position(){
            return position;
        }

        /*
         * Setter method 'set_position' will update the value of position
        */
        void set_position(string newPos){
            position = newPos;
        }

        /*
         * Getter method 'get_birthday' will return the player's year of birth
        */
        int get_birthday(){
            return birthday;
        }

        /*
         * Setter method 'set_position' will update the value of year of birth
        */
        void set_birthday(int newBirth){
            birthday = newBirth;
        }

        // Returns the exact age of the player
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

        /*
         * This method would be used as polymorphism
         * Would indicate the action a playing is making
         * Example: If the player is a midfielder polymorphism would change the outcome of the method as: giving assists
         *
         * Makes the interaction more dynamic
        */
        virtual void playing() = 0; // Using Abstract classes //

        // TODO: Tostring as an abstract method Ex: virtual string_tostring =0

        // To string would print out the information of the player object 
        string to_string(){
            // stringstream ss;
            string playerInfo = get_name() + " |    ";
            playerInfo += std::to_string(get_rating()) + " \t| ";
            playerInfo += get_country() + " |\t    ";
            playerInfo += std::to_string(get_birthday()) + "      | \n";
            return playerInfo;
        } 

};

/* Note: the arrays declared above are for testing purposes */
/* Eventually would be implemented a method or matrice with the complete information of each player to increse */

#endif