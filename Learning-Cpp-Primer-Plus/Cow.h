namespace Chapter12 {
	class Cow
	{
		char name[20];
		char* hobby;
		double weight;
	public:
		Cow();
		Cow(const char* nm, const char* ho, double wt);
		Cow(const Cow& c);
		~Cow();
		Cow& operator=(Cow& c);
		void ShowCow() const;
	};
}
