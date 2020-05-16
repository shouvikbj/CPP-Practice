#ifndef lifeup_h
#define lifeup_h


void lifeUp(int life){
    ++life;
}

int actualLifeUp(int life){
    return ++life;
}

void lifeUpUsingPointer(int* life){
    ++(*life);
}

void lifeUpUsingReference(int &life){
    ++life;
}


#endif

