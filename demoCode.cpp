#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int pointerCode(){

    //&(variable); get the memory address of the give variable (eg: int foo = &foo2. Cout << foo << endl; (results in a number) )
//foo becomes a pointer

//*(pointer): refer to the value the pointer is 'pointing to' (eg int foo3 = *foo. Cout << foo3 << endl; (results in whatever was stored in foo2) )
//The asterisk is a dereference operator

    // see http://www.cplusplus.com/doc/tutorial/pointers/

    int storedValue = 200;
    int *addrOfStoredValue = &storedValue;
    int dereferencedStoredValue = *addrOfStoredValue;

    cout << "The stored value is " << storedValue << endl << "The address of that value (pointer) is " << addrOfStoredValue << endl << "And the value refered to by that pointer is " << dereferencedStoredValue << endl;

}

int demoCode(){



    return 0;
}

int demoCodeOld(){
    cout << "Hello, World!" << endl;

    const double PI = 3.1415926535;

    char myGrade = 'A';

    bool isHappy = true;

    int myAge = 39;

    float favNumber = 3.141592;

    double otherfavNum = 3.1415926535;

    cout << "Fav number" << favNumber << endl;
    cout << "size of int" << sizeof(myAge) << endl
    << "size of double" << sizeof(otherfavNum) << endl
    << "size of float" << sizeof(favNumber) << endl;

    int largestInst = 1247483647;

    cout << "large int " << largestInst << endl;

    cout << "4 / 5 = " << (float) 4 / 5 << endl;

    int age = 101;
    int ageAtLastExam = 80;
    bool isIntoxicated = false;

    int yearsSinceLastExam = age - ageAtLastExam;


    if (age >= 1 && age < 16)
    {
        cout << "Age under 16! U no drive!" << endl;
    } else if (isIntoxicated){

        cout << "u drunk! u no drive!" << endl;

    } else if (age >= 80 && (age > 100 || yearsSinceLastExam > 5)){
        cout << "it's been too long since your last exam. NO DRIVING! " << endl;
    } else{
        cout << "Our blackmail server has crashed, and did not report anything usefull. you are free to drive. for now." << endl;
    }

    int greetingOption = 2;

    switch(greetingOption){

        case 1:
            cout << "1!" << endl;
            break;
        case 2:
            cout << "2!" << endl;
            break;
        default:
            cout << "OMG! default!" << endl;
    }

    cout << ((5>2) ? "Five is bigger then 2!" : "Two is bigger then five. wait, what?") << endl;

    int myFavNums[5];

    int badNums[5] = {4, 13, 14, 24, 34};

    cout << "bad number 1: " << badNums[0] << endl;

    char myName[2][8] ={{'A', ' ', 'S', 't', 'r', 'i', 'n', 'g'},
                        {'S', 'o', 'm', 'e', ' ', 'L', 'O', 'L'}};

    cout << myName[0][2] << endl;

    for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    for (int j = 0; j < 2; j++){
        for (int k = 0; k < 8; k++){
            cout << myName[j][k];
        }

        cout << endl;
    }

    int randNum = (rand() % 100) + 1;

    while(randNum != 100) {
        cout << "randomized: " << randNum << endl;

        randNum = (rand() % 100) + 1;
    }

    return 0;
}