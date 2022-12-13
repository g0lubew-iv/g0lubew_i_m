#include "iosfwd"


struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};


std::ostream& operator<<(std::ostream& out_, const Rdec2D& vector_);

Rdec2D& operator*=(Rdec2D& vector_, const double& number_); // multiplication on a number

Rdec2D& operator/=(Rdec2D& vector_, const double& number_);

Rdec2D& operator+=(Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D& operator-=(Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator*(const Rdec2D& vector_, const double& number_); // multiplication on a number

Rdec2D operator*(const double& number_, Rdec2D vector_); // multiplication on a number

Rdec2D operator/(const Rdec2D& vector_, const double& number_);

Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs);

// comparison operators

bool operator==(const Rdec2D& lhs, const Rdec2D& rhs);

bool operator!=(const Rdec2D& lhs, const Rdec2D& rhs);

double Norm(const Rdec2D& vector_);

double Dot(const Rdec2D& lhs, const Rdec2D& rhs); // scalar product


struct Rpol2D {
    double r = 0.0;
    double phi = 0.0;
};

Rpol2D& operator+=(Rpol2D& lhs, const Rpol2D& rhs);

Rpol2D& operator-=(Rpol2D& lhs, const Rpol2D& rhs);

Rpol2D operator+(const Rpol2D& lhs, const Rpol2D& rhs);

Rpol2D operator-(const Rpol2D& lhs, const Rpol2D& rhs);


// Rpol2D to Rdec2D and vice versa

Rpol2D ToPol(const Rdec2D& vector);

Rdec2D ToDec(const Rpol2D& vector);


struct State {
    const Rdec2D a;
    Rdec2D v;
    Rdec2D r;
};