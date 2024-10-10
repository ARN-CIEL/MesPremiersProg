// Programme principal : Menu interactif pour sélectionner un programme

// Ce programme présente à l'utilisateur un menu de choix de programmes.
// En fonction du choix de l'utilisateur, il appelle la fonction correspondante.

// Les programmes disponibles sont :
// 1. Estimation du coût d'un abonnement téléphonique
// 2. Calcul de caisse
// 3. Affichage d'un caractère et de son code ASCII
// 4. Table des codes ASCII
// 5. Taille des variables
// 6. Jeu de devinette
// 7. Triangle d'étoiles


// Début du programme

// Affichage du menu
// Afficher "Veuillez choisir un programme :"
// Afficher "1. Estimation du coût d'un abonnement téléphonique"
// Afficher "2. Calcul de caisse"
// Afficher "3. Affichage d'un caractère et de son code ASCII"
// Afficher "4. Table des codes ASCII"
// Afficher "5. Taille des variables"
// Afficher "6. Jeu de devinette"
// Afficher "7. Triangle d'étoiles"

#include <iostream>
#include "FonctionProg.h"

using namespace std;

#include <iostream>
using namespace std;

int main() {
    int choix;

    do {
        cout << "Menu:" << endl;
        cout << "1. Estimation du cout d'un abonnement telephonique" << endl;
        cout << "2. Calcul de caisse" << endl;
        cout << "3. Affichage d'un caractere et de son code ASCII" << endl;
        cout << "4. Table des codes ASCII" << endl;
        cout << "5. Taille des variables" << endl;
        cout << "6. Jeu de devinette" << endl;
        cout << "7. Triangle etoiles" << endl;
        cout << "0. Quitter" << endl;
        cout << "Entrez votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1:
            cout << "Vous avez choisi : Estimation du cout d'un abonnement telephonique" << endl;
            break;
        case 2:
            cout << "Vous avez choisi : Calcul de caisse" << endl;
            break;
        case 3:
            cout << "Vous avez choisi : Affichage ASCII" << endl;
            break;
        case 4: 
            cout << "Vous avez choisi : Table des code ASCII" << endl;
            break;
        case 5:
            cout << "Vous avez choisi : Taille des variables" << endl;
            break;
        case 6:
            cout << "Vous avez choisi : Jeu de devinette" << endl;
            break;
        case 7:
            cout << "Vous avez choisi : Triangle etoile" << endl;
            break;
        case 0:
            cout << "Au revoir !" << endl;
            break;
        default:
            cout << "Choix invalide." << endl;
        }
    } while (choix != 0);

    return 0;
}

