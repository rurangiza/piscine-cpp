#include "../includes/Phonebook.class.h"
#include <sstream>

Phonebook::Phonebook() {
    size = 0;
    is_empty = true;
};

Phonebook::~Phonebook() {
}

void Phonebook::add() {
    Contacts	new_contact;

    ui.subprompt(2, "Fill in the form");

//    ui.list(4, "First Name ... : ", "", false);
//    std::cin >> new_contact.first_name;
//
//    ui.list(4, "Last Name .... : ", "", false);
//    std::cin >> new_contact.last_name;
//
//    ui.list(4, "Nickname ..... : ", "", false);
//    std::cin >> new_contact.nickname;
//
//    ui.list(4, "Darkest secret : ", "", false);
//    std::getline(std::cin >> std::ws, new_contact.darkest_secret);


    new_contact.first_name = get_input("string", "First Name ... : ");
    new_contact.last_name = get_input("string", "Last Name .... : ");
    new_contact.nickname = get_input("string", "Nickname ..... : ");
    new_contact.darkest_secret = get_input("string", "Darkest secret : ");
    new_contact.phonenumber = get_input("number", "Phone number . : ");

//    std::string tmp;
//    do {
//      ui.list(4, "Phone number . : ", "", false);
//      std::getline(std::cin, tmp);
//    } while (!isNumber(tmp) || tmp.empty());
//    new_contact.phonenumber = tmp;


    ui.succ_msg(4, "Contact added to the phonebook");

    this->contacts[this->size % MAX_CONTACTS] = new_contact;
    this->size++;
    this->is_empty = false;
}

std::string Phonebook::get_input(const std::string& type, const std::string& prefix) {
    std::string tmp;

    while (true) {
      ui.list(4, prefix, "", false);
      std::getline(std::cin, tmp);
      if (tmp.empty())
          ui.err_msg(8, "empty. you must enter something");
      else if (type == "number" && !isNumber(tmp))
        ui.err_msg(8, "not a number");
      else
        break ;
    }
    return tmp;
}

void Phonebook::search() const {
    std::string contact_name;

    if (this->is_empty) {
        ui.warn_msg(4, "The phonebook is empty. Add a contact");
        return ;
    }
    this->showAllContacts();

    ui.inlineprompt(2, SEARCH_MSG);
    std::cin >> contact_name;
    this->showOneContact(contact_name);
}

void  Phonebook::showAllContacts() const {

    std::cout << std::setw(10) << std::right << "Index" << " | ";
    std::cout << std::setw(10) << std::right << "Firstname" << " | ";
    std::cout << std::setw(10) << std::right << "Lastname" << " | ";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << "---------- + ---------- + ---------- + ----------" << std::endl;

    int i = 0;
    while (i < this->size) {
        if (i >= 8)
            break ;
        std::cout << std::setw(10) << std::right << i << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(contacts[i].first_name, 10) << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(this->contacts[i].last_name, 10) << " | ";
        std::cout << std::setw(10) << std::right
                  << truncate(this->contacts[i].nickname, 10) << std::endl;
        i++;
    }
}

void  Phonebook::showOneContact(std::string contact_name) const {

    int i = 0;
    while (i < this->size) {
        if (this->contacts[i].first_name == contact_name) {
            ui.list(4, "First name ... : ", this->contacts[i].first_name, true);
            ui.list(4, "Last name .... : ", this->contacts[i].last_name, true);
            ui.list(4, "Nickname ..... : ", this->contacts[i].nickname, true);
            ui.list(4, "Phone number . : ", this->contacts[i].phonenumber, true);
            ui.list(4, "Darkest secret : ", this->contacts[i].first_name, true);
            return ;
        }
        i++;
    }
    std::cout << addSpace(4) << CORANGE "Couldn't find `" << contact_name << "`" CRESET << std::endl;
}

void Phonebook::fill() {

    Contacts person = {
        "John",
        "Doe",
        "Unknown",
        "0483872256",
        "Nothing special"
    };

    int i = this->size;
    while (i < 8) {
        this->contacts[i] = person;
        this->size++;
        i++;
    }
    this->is_empty = false;

    ui.succ_msg(4, "Filled the phonebook");
}