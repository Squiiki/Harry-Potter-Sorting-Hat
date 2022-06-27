// Purpose:     This basic program will ask the user some questions and place them into one of the four Harry Potter Houses based on their answers!
// Author:      Braeden Corr
// Date:        May 12th, 2020

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    //House Variables
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    //Answer Variables
    int answer1 = 0;
    int answer2 = 0;
    int answer3 = 0;
    int answer4 = 0;

    //Variables for finding the house
    int max = 0;
    string house;


    //'title' screen printout
    cout << " ____________________________________________________________ \n";
    cout << "|                                                            |\n";
    cout << "|               * * * * * * * * * * * * * * *                |\n";
    cout << "|               * *     Harry Potter      * *                |\n";
    cout << "|               * *   Sorting Hat Quiz    * *                |\n";
    cout << "|               * * * * * * * * * * * * * * *                |\n";
    cout << "|                                                            |\n";

    //First Question
    cout << "|    Q1) When I'm dead, I want people to remember me as:     |\n";
    cout << "|                                                            |\n";
    cout << "|        1) The Good                                         |\n";
    cout << "|        2) The Great                                        |\n";
    cout << "|        3) The Wise                                         |\n";
    cout << "|        4) The Bold                                         |\n";
    cout << "|                                                            |\n";
    cout << "|                                                            |\n";

    //First Answer
    cin >> answer1;

    //Assigning points to each house
    switch (answer1)
    {
    case 1:
        gryffindor++;
        break;
    case 2:
        hufflepuff++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        slytherin++;
        break;
    default:
        cout << "Invalid Input.";
    }

    //Second Question
    cout << "|    Q2) Dawn or Dusk?                                       |\n\n";
    cout << "|        1) Dawn                                             |\n";
    cout << "|        2) Dusk                                             |\n";
    cout << "|                                                            |\n";
    cout << "|                                                            |\n";

    //Second Answer
    cin >> answer2;

    //Assigning points to each house
    switch (answer2)
    {
    case 1:
        gryffindor++;
        ravenclaw++;
        break;
    case 2:
        hufflepuff++;
        slytherin++;
        break;
    default:
        cout << "Invalid Input.";
    }

    //Third Question
    cout << "|    Q3) Which kind of instrument most pleases your ear?     |\n";
    cout << "|                                                            |\n";
    cout << "|        1) The Violin                                       |\n";
    cout << "|        2) The Trumpet                                      |\n";
    cout << "|        3) The Piano                                        |\n";
    cout << "|        4) The Drum                                         |\n";
    cout << "|                                                            |\n";
    cout << "|                                                            |\n";

    //Third Answer
    cin >> answer3;

    //Assigning points to each house
    switch (answer3)
    {
    case 1:
        slytherin++;
        break;
    case 2:
        hufflepuff++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        cout << "Invalid Input.";
    }


    //Fourth Question
    cout << "|    Q3) Which road tempts you the most?                     |\n";
    cout << "|                                                            |\n";
    cout << "|        1) The wide, sunny, grassy lane                     |\n";
    cout << "|        2) The narrow, dark, lantern-lit alley              |\n";
    cout << "|        3) The twisting, leaf-strewn path through woods     |\n";
    cout << "|        4) The cobbled street lined (ancient buildings)     |\n";
    cout << "|                                                            |\n";
    cout << "|                                                            |\n";

    //Fourth Answer
    cin >> answer4;

    //Assigning points to each house
    switch (answer4)
    {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        gryffindor++;
        break;
    case 4:
        ravenclaw++;
        break;
    default:
        cout << "Invalid Input.";
    }

    //Max starts at 0, and cascades down, as far as I can tell, if there is a tie then hardluck
    if (gryffindor > max) 
    {
        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max) 
    {
        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (ravenclaw > max) 
    {
        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (slytherin > max) 
    {
        max = slytherin;
        house = "Slytherin";
    }

    //Print the results
    cout << "|                        " << house << "!!!                         |\n";
    cout << "|                                                            |\n";

    //Closer thing
    cout << "|                                                            |\n";
    cout << "|____________________________________________________________|\n\n\n\n";
}

