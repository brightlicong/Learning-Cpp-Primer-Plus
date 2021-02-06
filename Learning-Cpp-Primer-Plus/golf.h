namespace Chapter9{
	const int Len = 40;
	struct golf {
		char fullname[Len];
		int handicap;
	};

	void setgolf(golf& g, const char* name, int hc);
	int setgolf(golf& g);
	void handicap(golf& g, int hc);
	void showgolf(const golf& g);
}

namespace Chapter10 {
	class golf {
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		golf(const char* name, int hc);
		golf();
		void sethandicap(int hc);
		void showgolf() const;
	};
}

