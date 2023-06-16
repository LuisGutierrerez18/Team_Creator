/*
 * Fantasy Team Creator Proyect main class
 * Luis Enrique Gutierrez
 * For: Object Oriented Programming 2
 * Proyect designed as an interactive tool in which the user creates his own soccer team.
 * Includes many features as the type of positions, managers and club budget.
*/

#include<iostream> // print

#include "player.h"
#include "goalkeeper.h"
#include "defender.h"
#include "midfielder.h"
#include "attacker.h"
//#include "manager.h"
#include "team.h"

using namespace std;

// ? Prints information using colors

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */  
#include <stdlib.h>

Player* search_option_funtion(Team* team) {
    string name;
    cout<<"Be advised to use player's last name \n"; // Use only last name of the player
    cout<<"\nEnter the player's name: ";
    cin >> name;
    Player* foundPlayer = team->search_player(name);

    if (foundPlayer) {
        cout << name << " Was Found and Available \n";
        cout << foundPlayer->to_string(true) << "\n";
    } else {
        cout << name << " Doesn't exist \n";
    }

    return foundPlayer;
}

int main()
{
    string start;
    string rules;
    cout<<"\n";
    cout << BOLDCYAN<<"Welcome to the Team Creator Fantasy"<<RESET<<endl;
    cout<<"Press Any Key to start \n";
    cin >> start;
    cout<< "\n";
    cout << BOLDYELLOW"Rules are Simple: " << RESET << endl;
    cout<<"Enter a Player's Name We Add it to the Team List\n";
    cout<< "Enter ok to continue: ";
    cin>>rules; 

    // TODO: Change name of team.
    Team myTeam("Lobitos"); // Creates the team object in which evrything would be stored
    Team roster("Roster"); // Creates the team object in which evrything would be stored

    // ! Adding names to the list 
    // * Hi
    // ? Hello
    // 

    

    // TODO: Add Manager --> Added COMPLETE
   
    // ! DONE 
    cout << "\n";
    cout<< GREEN << "This is the Base Team" << RESET << endl;
   
    Player *gk = new Goalkeeper("ter Stegen", 88, "Germany", 1992, 182, 100);
    Player *def = new Defender("Araujo", 83, "Uruguay", 1999, 40, 2, 30);
    Player *mid = new Midfielder("deJong", 87, "Netherlands", 1997, 21, 88);
    Player *fwrd = new Attacker("L Messi", 94,"Argentina" , 1988, 95, 50, 120);
    Manager *mngr = new Manager("Manchester City", "Guardiola");
    myTeam.add_manager(mngr);
    myTeam.add_player(gk);
    myTeam.add_player(def);
    myTeam.add_player(mid);
    myTeam.add_player(fwrd);
    myTeam.add_player(new Attacker("Do Santos", 94,"Mexico" , 1988, 95, 50, 120));
    myTeam.add_player(new Attacker("Lukaku", 84,"Belgium" , 1992, 80, 50, 120));
    myTeam.add_player(new Goalkeeper("Pope", 85,"England" , 1988, 95, 50));


    roster.add_manager(new Manager("Spain", "No one"));
    roster.add_player(new Attacker("Daniel", 91, "Mexico", 2003, 20, 75, 100));
    roster.add_player(new Midfielder("Pedri", 88, "Spain", 2002, 21, 80));
    roster.add_player(new Midfielder("Kroos", 86, "Spain", 2003, 20, 75));
    roster.add_player(new Midfielder("Ramos", 88, "Spain", 2002, 21, 80));
    roster.add_player(new Defender("Balde", 86, "Spain", 2003, 20, 75, 10));
    roster.add_player(new Defender("Haaland", 88, "Spain", 2002, 21, 75, 10));
    roster.add_player(new Goalkeeper("Gavi", 86, "Spain", 2003, 20, 75));

    

    // Adjusts the budget of the team
    
    cout<< RED << "Your Team" << RESET << endl; // Prints with Color
    cout<<myTeam.to_string();
    cout<< RED << "Roster" << RESET << endl; // Prints with Color
    cout<<roster.to_string();
    
    // Using abstract classes method and polymorphism calling the method playing()
    cout << "\n";
    cout << "\n";
    cout<< RED << "Your Team is Playing Phenomal by the Way " << RESET << endl; // Prints with Color
    gk->playing();
    def->playing();
    mid->playing();
    fwrd->playing();
    cout<<"\n";
    
    //cout<<BOLDWHITE<<"Choose More"<<RESET<<endl;

    //myTeam.push_player();
    cout<<"\n";
    cout<<BOLDWHITE<<"Almost Done... Only Five More\n"<<RESET<<endl;
    // myTeam.push_player();
    int option = -1;
    Player* newPlayer;
    
    // Menu Start
    while(option != 4){
        cout<<"\n\n";
        cout<< "1. Search another player \n";
        cout<< "2. Search player in roster and add it to 'Lobitos' \n";
        cout<< "3. Print Your Team \n";
        cout<< "4. Exit \n";
        cin>>option;

        // Menu options
        switch(option) {
            case 1:
                search_option_funtion(&myTeam);
                break;
            case 2:
                newPlayer = search_option_funtion(&roster);
                if (newPlayer) {
                    myTeam.add_player(newPlayer);
                    cout<<"The player has been added!!! /n";
                }
                break;
            case 3:
                cout<<myTeam.to_string();
                break;
            case 4:
            default:
                cout << "Thanks for playing";
                return 0;

        }
    }
    
    // cout<<"Has been succesfully added to your team";

    // myTeam.adjust_budget();
    // cout<<BOLDGREEN"\nYour Players have been stored\n"<<RESET<<endl;
    // myTeam.to_string();
    // cout<<BOLDGREEN"\nCONGRATULATIONS\nYou Are All Set!\n"<<RESET<<endl;


    return 0;
}