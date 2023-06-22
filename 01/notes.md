# Themes
Allocation mémoire, pointeurs sur membres, réference, switch instruction

## La difference entre la stack et la heap. Quand les utiliser.

## La difference entre un pointeur et une reference

**Similitude**
- stoquent tous les deux l'addresse d'une autre variable

> un pointeur est une variable qui contien l'addresse d'une autre variable. Pour acceder au contenu de cette addresse, il faut "déréférencer" le pointeur càd aller a cette addresse. 

> une reference est un alias, càd un autre nom pour une variable déjà existante. Il peut etre vue comme un pointeur constant avec un dereferencement automatique (attention: pas un pointeur vers une donnée constante). 

Le code suivant fait la meme chose
```cpp
int main()
{
    int i = 9;

    // pointeur de {i}
    int *ptr = &i;
    // reference vers {i}
    int &ref = i;
}
```

**Differences**
- un pointeur peut etre initialisé quand tu le déclare OU plus tard et peut etre re-assigné. 
- une reference doit etre initialisée quand tu la déclare et ne peut pas etre re-assignée.
-

## Sources
- [Pointers vs References in C++](https://www.geeksforgeeks.org/pointers-vs-references-cpp/)
- 