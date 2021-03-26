#pragma once
#ifndef _FRACTION_H_
#define _FRACTION_H_
#include <cstdlib>
#include <ostream>
#include <string>
#include <iostream>
#include "HW1.h"
class Fraction {
private:
	int numerator;
	int denominator;
	int fullNumber;
public:
	Fraction() {
		numerator = 0;
		denominator = 0;
		fullNumber = 0;
	}
	Fraction(const int numerator, const int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
		fullNumber = 0;
	}
	Fraction(const int fullNumber, const int numerator, const int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
		this->fullNumber = fullNumber;
	}
	~Fraction() {

	}
	
	void Simplify() {
		int fit = numerator / denominator;
		if (fit > 0) {
			fullNumber += fit;
			numerator -= denominator * fit;
		}
		int gCD = GCD(numerator, denominator);
		numerator /= gCD;
		denominator /= gCD;
	}

	std::string ToString() const {
		std::string s;
		if (fullNumber != 0)
			s += std::to_string(fullNumber) + " ";
		if (numerator != 0)
			if (fullNumber > 0 && numerator < 0)
				s += "-";
			s += "["+std::to_string(numerator) + "/" + std::to_string(denominator)+"]";
		return s;
	}

	Fraction operator=(const Fraction& f) {
		/*Fraction nF;
		nF.numerator = f.numerator;
		nF.denominator = f.denominator;
		nF.fullNumber = f.fullNumber;
		return nF;*/
		numerator = f.numerator;
		denominator = f.denominator;
		fullNumber = f.fullNumber;
		return *this;
	}
	
	Fraction operator+=(const Fraction& f) {
		Fraction nF = *this + f;
		numerator = nF.numerator;
		denominator = nF.denominator;
		fullNumber = nF.fullNumber;
		return *this;
	}

	Fraction operator-=(const Fraction& f) {
		Fraction nF = *this - f;
		numerator = nF.numerator;
		denominator = nF.denominator;
		fullNumber = nF.fullNumber;
		return *this;
	}

	Fraction operator*=(const Fraction& f) {
		Fraction nF = *this * f;
		numerator = nF.numerator;
		denominator = nF.denominator;
		fullNumber = nF.fullNumber;
		return *this;
	}

	Fraction operator /=(const Fraction& f) {
		Fraction nF = *this / f;
		numerator = nF.numerator;
		denominator = nF.denominator;
		fullNumber = nF.fullNumber;
		return *this;
	}

	friend Fraction operator/(const Fraction& f1, const Fraction& f2) {
		Fraction fr(f2.denominator, (f2.numerator + (f2.fullNumber * f2.denominator)));
		Fraction f = f1;
		f *= fr;
		return f;
	}

	friend Fraction operator*(const Fraction& f1, const Fraction& f2) {
		Fraction f;
		f.numerator = (f1.numerator + f1.denominator*f1.fullNumber) * (f2.numerator + f2.denominator*f2.fullNumber);
		f.denominator = f1.denominator * f2.denominator;
		f.Simplify();
		return f;
	}

	friend Fraction operator-(const Fraction& f1, const Fraction& f2) {
		Fraction f;
		f.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
		f.denominator = f1.denominator * f2.denominator;
		f.fullNumber = f1.fullNumber - f2.fullNumber;
		f.Simplify();
		return f;
	}

	friend Fraction operator+(const Fraction& f1, const Fraction& f2) {
		Fraction f;
		f.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
		f.denominator = f1.denominator * f2.denominator;
		f.fullNumber = f1.fullNumber + f2.fullNumber;
		f.Simplify();
		return f;
	}

	friend bool operator==(const Fraction& f1, const Fraction& f2) {
		Fraction left = f1;
		Fraction right = f2;
		left.Simplify();
		right.Simplify();
		return(left.fullNumber == right.fullNumber && left.numerator == right.numerator && left.denominator == right.denominator);
	}
};

std::ostream& operator<<(std::ostream& os, const Fraction & f) {
	os << f.ToString();
	return os;
}
#endif