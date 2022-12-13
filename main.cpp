#include <fstream>
#include <cmath>
#include "geom/geom.hpp"


const double dt  = 0.01;                                          // the sampling step
const double g   = 9.8 ;                                          // the gravitational acceleration
double dist      = 0.0 ;                                          // the distation between cannons


bool is_kers_collision (const double& x, const double& y, const double& v_x,
	const double& v_y, const double& t, const double& d) {
 
    State Ker1 { {0, -g}, {x,  y},    {0, 0} };
    Ker1.r += Ker1.v * dt;
    Ker1.v += Ker1.a * dt;
    State Ker2 { {0, -g}, {v_x, v_y}, {d, 0} };
    double tt = t;
    while (tt > 0) {
        Ker2.r = Ker2.r + Ker2.v * dt;
        Ker2.v = Ker2.v + Ker2.a * dt;
        tt -= t;
    }
 
    bool is_collision = false;
 
    while ((Ker1.r.y > 0) && (Ker2.r.y > 0)) {
        Ker1.r += Ker1.v * dt;
        Ker1.v += Ker1.a * dt;
        Ker2.r += Ker2.v * dt;
        Ker2.v += Ker2.a * dt;
        if (Ker1.r.y > 0) {
            // continue;
        } if (Ker1.r == Ker2.r)  {
            is_collision = true;
            // continue;
        } else if ((Ker1.r.y < 0) || (Ker2.r.y < 0)) {
            // continue;
        }
    }
    return is_collision;
}


std::string get_coords(const double& x, const double& y, const double& v_x,
	const double& v_y, const double& t, const double& d) {
 
    State Ker1 { {0, -g}, {x, y},     {0, 0} };
    Ker1.r += Ker1.v * dt;
    Ker1.v += Ker1.a * dt;
 
    State Ker2 { {0, -g}, {v_x, v_y}, {d, 0} };
    double tt = dt;
    while (tt > 0) {
        Ker2.r += Ker2.v * dt;
        Ker2.v += Ker2.a * dt;
        tt -= dt;
    }
    std::string s = "";

    while ((Ker1.r.y > 0) && (Ker2.r.y > 0)) {
        Ker1.r += Ker1.v * dt;
        Ker1.v += Ker1.a * dt;
        Ker2.r += Ker2.v * dt;
        Ker2.v += Ker2.a * dt;
        s += std::to_string(Ker1.r.x) + "\t" + std::to_string(Ker1.r.y) + "\t" + std::to_string(Ker2.r.x) + "\t" + std::to_string(Ker2.r.y) + "\t\n";
        if (Ker1.r == Ker2.r) {
            break;
        } else if ((Ker2.r.y < 0) || (Ker2.r.y < 0)) {
            break;
        }
 
    }
    return s;
}


int main() {

	// We've been found Velocity of 2 Cannon that we need to collision of cannons' balls

	int v_x(0), v_y(0);
	std::ifstream input_file;
	input_file.open("input.txt");

	if (input_file.is_open()) {
		// Check if the file is open!
		input_file >> dist;
	    input_file >> v_x >> v_y;
	}

	input_file.close();
	double t           = dist / 300000;  // the time it takes us to fire the second cannon
	const double delta = 0.1;            // the frequency of getting coordinates

    // Body:

    std::ofstream out_file;
    out_file.open("output.csv");

    for (double x = delta; x < 10; x += delta) {
        for (double y = delta; y < 10; y += delta) {
            if (is_kers_collision(x, y, v_x, v_y, t, dist)) {
            	out_file << "For v2 = (" << x << ", " << y << ") we have next coords:" << std::endl;
            	out_file << "X1\tY1\tX2\tY2" << std::endl;
            	std::string ss = get_coords(x, y, v_x, v_y, t, dist); 

            	out_file << ss;
            }
        }
    }

    out_file.close();

	return 0;
}