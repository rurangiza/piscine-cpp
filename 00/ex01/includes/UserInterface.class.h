//
// Created by Arsène Rurangiza on 04/06/2023.
//

#ifndef USERINTERFACE_CLASS_H
#define USERINTERFACE_CLASS_H

#include <iostream>

#define CGRAY "\033[0;36m"
#define CRED "\033[0;31m"
#define CGREEN "\033[0;32m"
#define CORANGE "\033[0;33m"
#define CBLUE "\033[0;34m"
#define CRESET "\033[0m"
#define CBOLD "\033[1m"

#define SYM_DOT "• "
#define SYM_DRIGHT_ARROW "↳ "
#define SYM_BUBBLE "○ "
#define SYM_SUCCESS "✓ "

class UserInterface {

  public:

    UserInterface();
    ~UserInterface();

    void  prompt(int indent, std::string msg);
    void  subprompt(int indent, std::string msg);
    void  inlineprompt(int indent, std::string msg);
    void  info_msg(int indent, std::string msg);
    void  list(int indent, std::string field, std::string content, bool newline);
    void  err_msg(int indent, std::string msg);
    void  succ_msg(int indent, std::string msg);
    void  warn_msg(int indent, std::string msg);

  private:
    void  addSpace(int n);

};

#endif
