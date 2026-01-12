/*
 * File: struct_demo.c
 * Purpose: Demonstrate struct definition and usage
 * Notes:
 *   - Define a struct
 *   - Pass struct and struct pointer to functions
 */

#include <stdio.h>

struct Student {
    int id;
    int score;
};

void printStudent(struct Student s) {
    printf("ID: %d, Score: %d\n", s.id, s.score);
}

void updateScore(struct Student *s) {
    s->score = 100;
}

int main() {
    struct Student stu = {1001, 85};

    printStudent(stu);

    updateScore(&stu);
    printf("After update:\n");
    printStudent(stu);

    return 0;
}