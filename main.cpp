#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 
Integer.
Character.
Boolean.
Floating Point.
Double Floating Point.
Valueless or Void.

 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    // int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int number = 2;
    char character = 'a';
    bool boolean = false; 
    float floatingPoint = '3';
    double doubleFloatingPoint = '4';
    short shortType = '5';

    int number2 = 2;
    char character2 = 'a';
    bool boolean2 = false; 
    float floatingPoint2 = '3';
    double doubleFloatingPoint2 = '4';
    short shortType2 = '5';

    int number3 = 2;
    char character3 = 'a';
    bool boolean3 = false; 
    float floatingPoint3 = '3';
    double doubleFloatingPoint3 = '4';
    short shortType3 = '5';
    
    //ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(number, character, boolean, floatingPoint, doubleFloatingPoint, shortType, number2, character2, boolean2, floatingPoint2, doubleFloatingPoint2, shortType2, number3, character3, boolean3, floatingPoint3, doubleFloatingPoint3, shortType3);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
//bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
bool rentACar(int rentalDuration, int carType = 0)
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function

    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

bool ringThePhone(int ringDuration, int ringToneIdentifier = 0)
{ 
    ignoreUnused(ringDuration, ringToneIdentifier);
    return {};
} 

/*
 2)
 */

bool turnOnServerLed(int ledColor, bool willLedBink = false)
{ 
    ignoreUnused(ledColor, willLedBink);
    return {};
} 

/*
 3)
 */

bool pushButton(float secondsPressed, int buttonIdentifier = 0)
{ 
    ignoreUnused(secondsPressed, buttonIdentifier);
    return {};
} 

/*
 4)
 */

bool switchAirconditionerToHeat(int roomNumber)
{ 
    ignoreUnused(roomNumber);
    return {};
} 

/*
 5)
 */

bool changeConsoleDVD(int newDVDIdentifier)
{ 
    ignoreUnused(newDVDIdentifier);
    return {};
} 

/*
 6)
 */

bool waterThePlants(int durationMinutes = 15, char startingDirection = 's')
{ 
    ignoreUnused(durationMinutes, startingDirection);
    return {};
} 

/*
 7)
 */

bool goForABikeRide(int bikeModel = 0)
{ 
    ignoreUnused(bikeModel);
    return {};
}

/*
 8)
 */

void prepareCoffee(int numberOfCups, bool decaffeinated, int millilitersPerCup)
{ 
    ignoreUnused(numberOfCups, decaffeinated, millilitersPerCup);
    // return {};
}

/*
 9)
 */

bool sellCandies(int quantity = 1)
{ 
    ignoreUnused(quantity);
    return {};
}

/*
 10)
 */

short buyCigarettes(int quantity, bool minted = false)
{ 
    ignoreUnused(quantity, minted);
    return {};
} 




/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto phoneRinged = ringThePhone(10);

    //2)
    auto ledTurnedOn = turnOnServerLed(4, true);
    
    //3)
    auto buttonPushed = pushButton(3, 5);
    
    //4)
    auto acAlive = switchAirconditionerToHeat(2);
    
    //5)
    auto DVDChanged = changeConsoleDVD(344);
    
    //6)
    auto plantsWatered = waterThePlants(25,'n');
    
    //7)
    auto bikeAvailable = goForABikeRide(8);
    
    //8)
    prepareCoffee(5, false, 200);
    
    //9)
    auto wereCandiesSold = sellCandies();
    
    //10)
    auto pricePayed = buyCigarettes(20, true);
    
    //ignoreUnused(carRented);
    ignoreUnused(carRented,phoneRinged,ledTurnedOn,buttonPushed,acAlive,DVDChanged,plantsWatered,bikeAvailable,wereCandiesSold,pricePayed);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
