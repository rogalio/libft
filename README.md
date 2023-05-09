# Libft :heart: :books:
Une bibliothèque de fonctions en C couvrant les listes chaînées, fonctions de caractères, fonctions de chaînes de caractères, gestion de la mémoire et conversions diverses.
### Fonctions principales :rocket:
    Listes chaînées (fonctions ft_lst*)
    Fonctions de caractères (fonctions ft_is*, ft_toupper, ft_tolower)
    Fonctions de chaînes de caractères (fonctions ft_str*)
    Gestion de la mémoire (fonctions ft_mem*, ft_calloc)
    Conversions et autres (fonctions ft_atoi, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
### Comment compiler la bibliothèque? :hammer_and_wrench:
    Clonez ce dépôt sur votre machine locale.
    Exécutez make pour compiler la bibliothèque.
    La bibliothèque compilée sera disponible sous le nom libft.a.
    
    Le Makefile fourni avec ce projet contient les règles suivantes :

    all (par défaut) : compile la bibliothèque avec les fonctions principales
    so : compile la bibliothèque sous forme de bibliothèque partagée (libft.so)
    clean : supprime les fichiers objets
    fclean : supprime les fichiers objets et la bibliothèque
    re : recompile tout (équivalent à fclean puis all)
    bonus : compile la bibliothèque avec des fonctions supplémentaires (bonus)
### Exemple d'utilisation :bulb:
    Incluez simplement l'en-tête libft.h dans votre projet et liez la bibliothèque libft.a lors de la compilation.
    
    #include "libft.h"

    int main()
    {
      char *str = ft_strdup("Hello, World!");
      ft_putendl_fd(str, 1);
      free(str);
      return 0;
    }
### Contributions et support :raising_hand:
    N'hésitez pas à soumettre des issues et des pull requests si vous trouvez des erreurs ou si vous avez des suggestions d'amélioration. Toute contribution est la bienvenue! :smiley:

Bonne utilisation de Libft! :heart:
