#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Circle {
	double radius;
	int x, y;
	char* color;
};

struct Square {
	double side;
	int x, y;
	char* color;
};

typedef struct Square Square;
typedef struct Circle Circle;

int circleFitsInSquare(struct Circle* circle, struct Square* square) {
    return (circle->radius * 2 <= square->side);
}

int squareFitsInCircle(struct Square* square, struct Circle* circle) {
    double diagonal = sqrt(2) * square->side;
    return (diagonal <= 2 * circle->radius);
}

void printResult(struct Circle* circle, struct Square* square) {
    if (circleFitsInSquare(circle, square)) {
        printf("The circle fits into the square.\n");
    }
    else {
        printf("The circle does not fit into the square.\n");
    }

    if (squareFitsInCircle(square, circle)) {
        printf("The square fits into the circle.\n");
    }
    else {
        printf("The square does not fit into the circle.\n");
        //printf("I am adding this sentenses to check github");
    }
}

int main() {

    struct Circle myCircle = { 5.0, 0, 0, "Red" };
    struct Square mySquare = { 10.0, 0, 0, "Blue" };

    printResult(&myCircle, &mySquare);

    printf("here is another sentense to test github");
    printf("this is the second change I am making I want to save it as well");
    printf("hahahahahah");


    return 0;
}


