#include <iostream>
#include "Book.h"
using namespace std;

void Book::Set_num_chapters(int new_num_chapters) {
    if (new_num_chapters <= 0) {
        cout << "There can't be less than one chapter in a book.\n";
    }
    else {
        num_chapters = new_num_chapters;
    }
}

int Book::Get_num_chapters() {
    return num_chapters;
}
