#include "UltimatePowerup.h"

UltimatePowerup::UltimatePowerup(Player* p) {
    this->p = p;
}

void UltimatePowerup::activate() {
    //TODO sorting of powerup list
    int size = this->p->powerupList.size();
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (this->p->powerupList[j]->rank < this->p->powerupList[j + 1]->rank) {
                Powerup* pw = this->p->powerupList[j];
                this->p->powerupList[j] = this->p->powerupList[j + 1];
                this->p->powerupList[j + 1] = pw;
            }
        }
    }
}

string UltimatePowerup::toString() {
    return "N/A";
}