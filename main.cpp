#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    // Get the output file path from the user
    cout << "Enter the path of the output file: ";
    string outputFilePath;
    cin >> outputFilePath;

    // Generate a random password using Python
    string command = "python generate_password.py " + outputFilePath;
    system(command.c_str());

    // Read the password from the text file
    ifstream passwordFile(outputFilePath);
    string password;
    getline(passwordFile, password);

    // Display the password to the user
    cout << "Your random password is: " << password << endl;

    // Allow the user to search for a password in the text file
    cout << "Enter a password to search for: ";
    string searchPassword;
    cin >> searchPassword;

    ifstream file(outputFilePath);
    string line;
    while (getline(file, line))
    {
        if (line == searchPassword)
        {
            cout << "Password found!" << endl;
            return 0;
        }
    }
    cout << "Password not found." << endl;

    return 0;
}
