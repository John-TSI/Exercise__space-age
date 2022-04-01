// https://exercism.org/tracks/cpp/exercises/space-age

#include<iostream>
#include<iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;



// --- GLOBALS ---

// orbital periods in seconds
const double EARTH = 31557600.0, MERCURY = 0.2408467 * EARTH, VENUS = 0.61519726 * EARTH, MARS = 1.8808158 * EARTH,
            JUPITER = 11.862615 * EARTH, SATURN = 29.447498 * EARTH, URANUS = 84.016846 * EARTH, NEPTUNE = 164.79132 * EARTH;



// --- PROTOTYPES ---
double GetInput();
void ComputeAge(bool&);



int main()
{
    system("cls");

    bool quit = false;
    do
    {
        ComputeAge(quit);
    } 
    while(!quit);

    return 0;
}



// --- FUNC DEFINITIONS ---
double GetInput()
{
    double input = 0.0;
    cout << "\nEnter a period of time, in seconds:" << endl;
    cout << "> ";
    cin >> input;

    return input;
}


void ComputeAge(bool& quit)
{ 
    char planet = 'z';
    cout << "For which planet would you like to compute an equivalent age? (input x to quit)" << endl;
    cout << "-------------------" << endl;
    cout << "m ...... Mercury" << endl;
    cout << "V ...... Venus" << endl;
    cout << "E ...... Earth" << endl;
    cout << "M ...... Mars" << endl;
    cout << "J ...... Jupiter" << endl;
    cout << "S ...... Saturn" << endl;
    cout << "U ...... Uranus" << endl;
    cout << "N ...... Neptune" << endl;
    cout << "-------------------" << endl;
    cout << "> ";
    cin >> planet;


    double input = 0;
    switch(planet)
    {
        case 'm':
            input = GetInput();
            cout << "\n" << input << " seconds is equivalent to " << setprecision(2) << input/MERCURY << " Mercurial years.\n" << endl;
            break; 
        case 'V':
        case 'v':
            input = GetInput();
            cout << "\n" << input << " seconds is equivalent to " << setprecision(2) << input/VENUS << " Venusian years.\n" << endl;
            break; 
        case 'E':
        case 'e':
            input = GetInput();
            cout << "\n" << input << " seconds is equivalent to " << setprecision(2) << input/EARTH << " Terrestrial years.\n" << endl;
            break;
        case 'M':
            input = GetInput();
            cout << "\n" << input << " seconds is equivalent to " << setprecision(2) << input/MARS << " Martian years.\n" << endl;
            break;
        case 'J':
        case 'j':
            input = GetInput();
            cout << "\n" << input << " seconds is equivalent to " << setprecision(2) << input/JUPITER << " Jovian years.\n" << endl;
            break;
        case 'S':
        case 's':
            input = GetInput();
            cout << "\n" << input << " seconds is equivalent to " << setprecision(2) << input/SATURN << " Saturnine years.\n" << endl;
            break;
        case 'U':
        case 'u':
            input = GetInput();
            cout << "\n" << input << " seconds is equivalent to " << setprecision(2) << input/URANUS << " Uranian years.\n" << endl;
            break;
        case 'N':
        case 'n':
            input = GetInput();
            cout << "\n" << input << " seconds is equivalent to " << setprecision(2) << input/NEPTUNE << " Neptunian years.\n" << endl;
            break;
        case 'X':
        case 'x':
            quit = true;
            break;
        default:
            cout << "\nInvalid input.\n" << endl;            
    }
}