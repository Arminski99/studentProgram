#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;


class student {

    private:
        char name_[20];
        int plz_;

    public:

        student(char name[20], int plz) {
            strcpy(name_, name);
            plz_ = plz;
        }

        void setName(char name[20]) {
            strcpy(name_, name);
        }

        void setPlz(int plz) {
            plz_ = plz;
        }

        char getName() {
            return name_[20];
        }

        int getPlz() {
            return plz_;
        }

};

int main() {
    
    //Nicht weiter gekommen
    student Student1;

   


}