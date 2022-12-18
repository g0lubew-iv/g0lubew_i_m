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
    int y_m(0), x_c(0);
    std::cin >> y_m >> x_c;
    double v_res = Norm(Rdec2D{x_c, 0} - Rdec2D{0, y_m});
    for (int v_ = 0.1; v_ += 0.1; v_ <= v_res) {
        Cat tom;
        tom.r = {x_c, 0};
        tom.v = {0, v_};
        tom.attack = 0;

        Mouse jerry;
        jerry.r = {0, y_m};
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
            tom.v    = (jerry.r - tom.r) * (1 / Norm(jerry.r - tom.r)) * Norm(tom.v);
            tom.r    += tom.v * dt;
            if (Norm(tom.v * dt) >= Norm(jerry.r - last_r)) {
                is_catched = true;
                s_cat   += Norm(jerry.r - last_r);
                s_mouse += Norm(jerry.r - last_r);
                tom.r    = jerry.r;
                break;
            }
            jerry.r += jerry.v * dt;
            if (jerry.r.y > 0) {
                is_safe = true;
                break;
            }
            s_cat   += Norm(tom.v * dt);
            s_mouse += Norm(jerry.v * dt);
        }
        // std::cout << jerry.r << " " << tom.r << std::endl;
        if (is_catched) {
            v_res = v_;
            break;
        }
    }
    std::cout << v_res;
    return 0;
}