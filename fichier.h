struct matiere
{
int cm; // code Mati�re
float DS; // note DS
float examen;
float moyenne;
};
typedef struct matiere
MATIERE;

struct etudiant
{
int ce; // code etudiant
int nbMatieres;
MATIERE* matieres;
float moyenne;
};
typedef struct etudiant
ETUDIANT;

struct classe
{
int cc; // code classe
int nbEtudiants;
ETUDIANT *etudiants;
};
typedef struct classe
CLASSE;
//first try
