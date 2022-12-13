#include <iostream>
#include <cmath>
#include "RV.hpp"

const double dt = 0.001;

struct Cat {
    Rdec2D r = {0, 0};
    Rdec2D v = {0, 0};
    double attack = 0.0;  // a radius of Cat's defense
};


struct Mouse {
    Rdec2D r = {0, 0};
    Rdec2D v = {0, 0};
};


int main() {
    Cat tom;
    tom.r = {10, 0};
    tom.v = {0, 1.145};
    tom.attack = 0;

    Mouse jerry;
    jerry.r = {0, -10};
    jerry.v = {0, 1};

    Rdec2D last_r   = tom.r;
    Rdec2D last_r_m = jerry.r;
    bool is_catched = false;
    bool is_safe    = false;
    double s_mouse  = 0;
    double s_cat    = 0;
    while (!is_catched && !is_safe) {
        last_r   = tom.r;
        last_r_m = jerry.r;
        tom.v    = (jerry.r - tom.r) * (1 / getnorm(jerry.r - tom.r)) * getnorm(tom.v);
        tom.r    += tom.v * dt;
        if (getnorm(tom.v * dt) >= getnorm(jerry.r - last_r)) {
            is_catched = true;
            s_cat     += getnorm(jerry.r - last_r);
            s_mouse   += getnorm(jerry.r - last_r);
            tom.r      = jerry.r;
            break;
        }
        jerry.r += jerry.v * dt;
        if (jerry.r.y > 0) {
            is_safe = true;
            break;
        }
        s_cat   += getnorm(tom.v * dt);
        s_mouse += getnorm(jerry.v * dt);
    }
    std::cout << jerry.r << " " << tom.r << std::endl;
    if (is_catched) {
        std::cout << "Jerry is catched! >_<";
    } else {
        std::cout << "Jerry is saved!   ^_^";
    }
    std::cout << std::endl << s_mouse / s_cat << " " << s_cat / s_mouse;

    return 0;
}