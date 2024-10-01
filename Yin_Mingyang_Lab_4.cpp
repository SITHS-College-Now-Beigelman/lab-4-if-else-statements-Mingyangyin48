// Mingyang Michelle Yin
// Oct. 1, 2024
// Lab 4

#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    // Variables  
    string fruitName; 
    double fruitSugarGram;
    char stop;
    bool yesNo = true;

    while (yesNo == true)
    {
    cout << "Please enter name of your fruit: "; // asks the user what the fruit name is
    cin >> fruitName;

    cout << "How much sugar is in one cup of " << fruitName << " (in grams): "; // asks the user the amount sugar is in one cup of x fruit
    cin >> fruitSugarGram;
    cout << endl;
    
    // telling the user if it is a low, medium, or high sugar fruit

    if (fruitSugarGram < 10) // if less than 10 grams it is a low sugar fruit
        cout << fruitName << " is a low sugar fruit";
    else if (fruitSugarGram <= 14) // if between 10 and 14 grams it is a medium sugar fruit
      cout << fruitName << " is a medium sugar fruit";
    else // if more than 14 grams it is a high sugar fruit
        cout << fruitName << " is a high sugar fruit";
    cout << endl;

    cout << "Do you want to continue? y/n "; // asking the user if they want to loop the question
    cin >> stop;
    if (stop == 'n') // if the user states no the equation ends
        {yesNo = false;
        cout << endl;
        cout << "Thank you have a good day."; }
    cout << endl; // if the user states yes the loop repeats.

    }

    return 0;
}

/*
    //OUTPUT//

Please enter name of your fruit: grapes
How much sugar is in one cup of grapes (in grams): 23.37

grapes is a high sugar fruit 
Do you want to continue? y/n y

Please enter name of your fruit: avocado  
How much sugar is in one cup of avocado (in grams): 0.99

avocado is a low sugar fruit
Do you want to continue? y/n y

Please enter name of your fruit: strawberries
How much sugar is in one cup of strawberries (in grams): 7

strawberries is a low sugar fruit
Do you want to continue? y/n y

Please enter name of your fruit: grapefruit
How much sugar is in one cup of grapefruit (in grams): 10.6

grapefruit is a medium sugar fruit
Do you want to continue? y/n y

Please enter name of your fruit: orange
How much sugar is in one cup of orange (in grams): 14

orange is a medium sugar fruit
Do you want to continue? y/n n

Thank you have a good day.

*/