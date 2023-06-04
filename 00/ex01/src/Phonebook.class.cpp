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

    ui.list(4, "First Name ... : ", "", false);
    std::cin >> new_contact.first_name;

    ui.list(4, "Last Name .... : ", "", false);
    std::cin >> new_contact.last_name;

    ui.list(4, "Nickname ..... : ", "", false);
    std::cin >> new_contact.nickname;

    ui.list(4, "Darkest secret : ", "", false);
    std::getline(std::cin >> std::ws, new_contact.darkest_secret);

    std::string tmp;
    while (true) {
        tmp.clear();
        ui.list(4, "Phone number . : ", "", false);
        std::cin >> std::dec >> tmp;
        if (isNumber(tmp)) {
            std::istringstream iss(tmp);
            if (iss >> new_contact.phonenumber) {
                break;
            }
        }
        std::cout << CRED ERR_NOTNUM CRESET << std::endl;
        tmp.clear();
    }

    ui.succ_msg(4, "Contact added to the phonebook");

    this->contacts[this->size % MAX_CONTACTS] = new_contact;
    this->size++;
    this->is_empty = false;
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
            ui.list(4, "Phone number . : ", std::to_string(this->contacts[i].phonenumber), true);
            ui.list(4, "Darkest secret : ", this->contacts[i].first_name, true);
            return ;
        }
        i++;
    }
    std::cout << addSpace(6) << CORANGE "Couldn't find `" << contact_name << "`" CRESET << std::endl;
}

void Phonebook::fill() {

    Contacts person = {
        "John",
        "Doe",
        "Unknown",
        48378374,
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