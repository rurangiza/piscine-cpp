//
// Created by Arsène Rurangiza on 04/06/2023.
//

#include "../includes/UserInterface.class.h"

UserInterface::UserInterface() {};

UserInterface::~UserInterface() {};

/* Display error message */
void  UserInterface::err_msg(int indent, std::string msg) {
    this->addSpace(indent);
    std::cerr << CRED CBOLD "Error: " CRESET;
    std::cerr << msg << std::endl;
};

/* Display success message */
void  UserInterface::succ_msg(int indent, std::string msg) {
    this->addSpace(indent);
    std::cout << CGREEN CBOLD SYM_SUCCESS CRESET;
    std::cout << msg << std::endl;
}

/* Display informational messages */
void  UserInterface::info_msg(int indent, std::string msg) {
    this->addSpace(indent);
    std::cout << CBLUE SYM_DOT CRESET << std::endl;
    this->addSpace(indent);
    std::cout << msg << std::endl;
};

/* List elements */
void  UserInterface::list(int indent, std::string field, std::string content, bool newline) {
    this->addSpace(indent);
    std::cout << CGRAY "- " CRESET;
    if (!field.empty())
      std::cout << field;
    if (!content.empty())
      std::cout << content;
    if (newline == true)
      std::cout << std::endl;
}

/* Ask user for input */
void  UserInterface::prompt(int indent, std::string msg) {
    this->addSpace(indent);
    std::cout << CBOLD CBLUE << std::endl << msg << CRESET << std::endl;
    this->addSpace(indent);
    std::cout << CBLUE SYM_DRIGHT_ARROW CRESET;
};

/* Ask user for additional input */
void  UserInterface::subprompt(int indent, std::string msg) {
    this->addSpace(indent);
    std::cout << SYM_DRIGHT_ARROW;
    std::cout << CBOLD << msg << CRESET << std::endl;
};

void UserInterface::inlineprompt(int indent, std::string msg) {
    this->addSpace(indent);
    std::cout << SYM_DRIGHT_ARROW;
    std::cout << CBOLD << msg << CRESET << " ";
}

/* Display warning message */
void  UserInterface::warn_msg(int indent, std::string msg) {
    this->addSpace(indent);
    std::cout << CORANGE << msg << CRESET << std::endl;
};

/* Add indentation dynamicly */
void  UserInterface::addSpace(int n) {
    while (n-- > 0)
      std::cout << " ";
};