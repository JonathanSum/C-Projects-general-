/*********************************************
 *   Author         : Jonathan Sum
 *   Assignment     : Assignment 4: Bulletin Board
 *   SECTION        : CS 003A
 *   Due Date       : 3/19/19
 *   ________________________________________________
 *   Create an extremely rudimentary bulletin board
 *   with a simple command-line interface
***********************************************/
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "bboard.h"
#include <cctype>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;


//This program is for loading the file name by command line argument.

int main(int argc, char *argv[]) {
    //INPUT  --building a constructor for bboard
    BBoard started = BBoard();

    string fileName = argv[1];      //INPUT --Assigning the name of the
                                    // text file to variable file name

    started.setup(fileName);            //CALC -- using the setup function to load the user data


    return 0;
}






















