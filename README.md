# Password Generator
This program generates a random password and allows the user to search for a password in the generated password list. The password is generated using Python and written to a text file, which is then read by the C++ program. The program is designed to be run from the command line.

## Getting Started
To use the password generator, you will need to have the following software installed:

A C++ compiler (e.g., GCC or Clang)

Python 3
## Usage
To run the program, follow these steps:

Open a terminal window and navigate to the directory containing the program files. 
Compile the C++ program by running the following command:

`g++ main.cpp -o password_generator`

Run the program by running the following command:

`./password_generator output.txt`

Replace output.txt with the desired output file path. This is the file where the generated password will be written.

The program will generate a random password using Python and write it to the specified output file. It will then read the generated password from the file and display it to the user.

The program will prompt the user to enter a password to search for. The program will then search the output file for the specified password. If the password is found, the program will display a message indicating that it was found. If the password is not found, the program will display a message indicating that it was not found.

## Contributing
This program is open-source and contributions are welcome. If you find a bug or have an idea for a feature, please submit an issue or pull request on GitHub.

## License
This program is licensed under the GMT3 License. See the LICENSE file for details.

### Acknowledgements
This program was inspired by a similar program in the book "Programming: Principles and Practice Using C++" by Bjarne Stroustrup.
