# to set input.txt and output.txt files for 

-   open that folder in which input.txt and output.txt is present
-   Delete any file in .vscode folder.
-   open terminal> configure tasks >create  tasks.json from template > others
-   tasks.json file will open , delete everything and paste:


        {
        "version": "2.0.0",
        "tasks": [
            {
                "label": "compile",
                "type": "shell",
                "command": "g++",
                "args": [
                    "-std=c++17",
                    "-o",
                    "${fileBasenameNoExtension}",
                    "${file}"
                ],
                "group": {
                    "kind": "build",
                    "isDefault": false
                }
            },
            {
                "label": "compile and run",
                "type": "shell",
                "command": "g++ -std=c++17 -o \"${fileBasenameNoExtension}\" \"${file}\" && .\\${fileBasenameNoExtension} < input.txt > output.txt",
                "group": {
                    "kind": "build",
                    "isDefault": true
                }
            }
        ]
        }

-   split screen to view to input.txt ad output.txt file
-   (optional) ctrl+shift+ P and chnage command prompt as default terminal.
-   create a test.cpp file and paste
   
        #include <iostream>
        using namespace std;

        int main(){
            string x;
            cin>> x;
            cout<<" Success "<< x;
            return 0;
        }

-   press Ctrl+shift+B to run
-   create a folder bits and a file stdc++.h and paste

    #include <iostream>     // Input/output stream objects
    #include <fstream>      // File stream objects
    #include <sstream>      // String stream objects
    #include <iomanip>      // Input/output manipulators
    #include <string>       // String class and functions
    #include <vector>       // Dynamic array
    #include <list>         // Doubly linked list
    #include <set>          // Set container
    #include <map>          // Map container
    #include <queue>        // Queue container
    #include <stack>        // Stack container
    #include <algorithm>    // Algorithms on sequences (e.g., sort, find)
    #include <cmath>        // Mathematical functions
    #include <ctime>        // Date and time functions
    #include <cstdlib>      // General purpose functions (e.g., memory management)
    #include <cstring>      // C-style string functions
    #include <cctype>       // Character classification functions
    #include <cassert>      // Assert function for debugging
    #include <exception>    // Standard exceptions
    #include <functional>   // Function objects
    #include <iterator>     // Iterator classes
    #include <limits>       // Numeric limits
    #include <locale>       // Localization and internationalization
    #include <numeric>      // Numeric operations (e.g., accumulate)
    #include <random>       // Random number generators
    #include <stdexcept>    // Standard exception classes
    #include <typeinfo>     // Runtime type information
    #include <utility>      // Utility components (e.g., std::pair)

- Now using <bits/stdc++.h> will include all libraies required.



# 4. Resursion
-   Print nos 1 to 10 without loop using recursion
-   