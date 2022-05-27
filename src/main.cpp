#include <iostream>
#include <unistd.h>
#include <fstream>
#include "/src/Header.h"

int main() {
    std::string commands;
    std::string fileName;
    std::cout << "BLSH " << __VERSION__ << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Type \\help to get help" << std::endl;
    while (true)
    {
        std::cout << "BLSH " << get_current_dir_name() << "> ";
        std::cin >> commands;
        
        if (commands == "\\help") {
            
            Help();

        }else if (commands == "\\mkfile") {

            std::cin >> fileName;
            ofstream o;
            o.open(fileName);
            o.close();
                    
        }else if (commands == "\\") {

            std::cout << "Hello" << std::endl;
        
        }else if (commands == "\\exit") {

            exit(0);

        }
    }
    return 0;
}
