#include <stdio.h>
#include <stdlib.h>

typedef struct tag_Point{
    int x;
    int y;
} Point;

typedef struct tag_Circle{
    Point pt;
    int r;
} Circle;

typedef struct tag_CirclePair {
	Circle c1;
	Circle c2;
	int answer;
} CirclePair;

// Get Square of Integer Value
int getSquare(const int value);
// Get Squared Euclidian Distance of two Points.
int getSED(const Point pt1, const Point pt2);
// Count Intersection Points of two Circles.
int CIS(const Circle c1, const Circle c2);

int main()
{
    int T;
	CirclePair* pCP;

    scanf("%d", &T);
	pCP = calloc(T, sizeof(CirclePair));
    
    for(int i = 0 ; i < T ; i++){
		scanf("%d %d %d", &pCP[i].c1.pt.x, &pCP[i].c1.pt.y, &pCP[i].c1.r);
		scanf("%d %d %d", &pCP[i].c2.pt.x, &pCP[i].c2.pt.y, &pCP[i].c2.r);
		pCP[i].answer = CIS(pCP[i].c1, pCP[i].c2);
    }

	for (int i = 0; i < T; i++) {
		printf("%d\n", pCP[i].answer);
	}

	free(pCP);

    return 0;
}


int getSquare(const int value)
{
    return value*value;
}

int getSED(const Point pt1, const Point pt2)
{
    int temp = 0;

    temp += getSquare(pt1.x - pt2.x);
    temp += getSquare(pt1.y - pt2.y);

    return temp;
}

int CIS(const Circle c1, const Circle c2)
{
	if (c1.pt.x == c2.pt.x && c1.pt.y == c2.pt.y) {
		if (c1.r == c2.r)
			return -1;
		else
			return 0;
	}
    else{
        int SED = getSED(c1.pt, c2.pt);

        if(SED > getSquare(c1.r + c2.r))
            return 0;
        else if(SED == getSquare(c1.r + c2.r))
            return 1;
        else
            return 2;
    }
}