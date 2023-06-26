# C++ Module 01

## Themes
Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form

## Définitions
==Ad-hoc polymorphism== : la **capacité** de définir plusieurs fonctions ou opérateurs avec le même nom, mais des paramètres différents, afin de leur permettre d'agir de manière polymorphe en fonction des types de données avec lesquels elles sont utilisées

Polymorphism
: quelque chose qui a plusieurs formes. (poly=plusieurs, morph=formes)

Ad-hoc
: quelque chose créé spontanément pour un besoin précis

==operator overloading== : **fonctionnalité** qui permet de redéfinir le comportement des opérateurs existants (comme +, -, *, /, etc.) pour des types de données personnalisés. Cela permet aux objets de se comporter comme des types de données primitifs et de simplifier l'écriture de code pour les opérations courantes

==Orthodox Canonical class form== : une **convention** de programmation en C++ qui consiste à définir une classe de manière à ce qu'elle respecte un ensemble de règles spécifiques. Ces règles comprennent la définition d'un constructeur de copie, d'un opérateur d'assignation, d'un destructeur et d'un constructeur par défaut. En respectant ces règles, une classe peut être copiée, assignée et détruite de manière fiable et prévisible, ce qui facilite la gestion de la mémoire et évite les erreurs courantes de programmation

## Questions
- static member variable: une variable avec une valeur commune a toutes les instances d'un meme object
### copy constructor
- qu'est-ce qu'un constructeur copy?
- quand est-ce qu'on l'utilise?


## To-do's:
- [ ] ex00 - My First Class in Orthodox Canonical Form
- [ ] ex01 - Towards a more useful
fixed-point number class
- [ ] ex02 - Now we’re talking
- [ ] ex03 - BSP (Binary Space Partitioning)

## Sources
- Understanding and Using Floating Point Numbers [1](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)[2](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)[3](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)
- Introduction to Fixed Point Number Representation [Article](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)