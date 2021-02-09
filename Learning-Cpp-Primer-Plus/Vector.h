#include <fstream>
namespace Chapter11 {
	class Vector {
	public:
		enum Mode {RECT, POL};
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector() {}
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		double x_val() const { return x; }
		double y_val() const { return y; }
		double mag_val() const { return mag; }
		double ang_val() const { return ang; }
		void polor_mode() { mode = POL; }
		void rect_mode() { mode = RECT; }
		Vector operator+(const Vector& b) const;
		Vector operator-(const Vector& b) const;
		Vector operator-() const;
		Vector operator*(double n) const;

		friend Vector operator*(double n, const Vector& a);
		friend std::fstream& operator<<(std::fstream& os, const Vector& v);

	};
}

