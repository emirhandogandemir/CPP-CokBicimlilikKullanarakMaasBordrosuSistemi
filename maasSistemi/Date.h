#ifndef DATE_H
#define DATE_H


class Date
{
public:

	static const unsigned int monthsPerYears = 12;
	explicit Date(int = 1, int = 1, int = 1990);
	~Date();
	void print() const;// ay gün yýlýn çýktýsýný verir
	unsigned int getMonth()const;
private:
	unsigned int day;
	unsigned int month;
	unsigned int year;
	unsigned int checkDay(int) const;
};
#endif // !DATE_H
