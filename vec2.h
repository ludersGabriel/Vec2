#ifndef VEC2_H
#define VEC2_H

#include <math.h>
#include <iostream>

class vec2{
    public:
        float x, y;
    public:
	//constructor to initialize every new vec2
        vec2(float xcoord = 0, float ycoord = 0);

	//overloaded + operator -> returns
	//new vec2(vecA.x + vecB.x, vecA.y + vecB.y)
        vec2 operator + (vec2 const &coord);

	//overloaded - operator -> returns
	//new vec2(vecA.x - vecB.x, vecA.y - vecB.y)
        vec2 operator - (vec2 const &coord);

	//scalar division
	//overloaded / operator -> returns
	//new vec2(vecA.x/num, vecA.y/num), num being a float
        vec2 operator / (float const &num);

	//scalar multiplication
	//overloaded * operator -> returns
	//new vec2(vecA.x * num, vecA.y * num) 
        vec2 operator * (float const &num);

	//overloaded = operator 
        // vecA.x = vecB.x, vecA.y = vecB.y
	vec2 operator = (vec2 const &coord);
        
	//overloaded == operator -> returns
	//vecA.x == vecB.x and vecA.y == vecB.y
	bool operator == (vec2 const &coord);

	//vector module operation
	//returns the size of the vector
        float magnitude();

	//returns the distance between two vectors
        float distance(vec2 coord);

	//print self coordenates
        void print_coord(void);
};


#endif
