#pragma once

#include <iostream>


namespace mathlib
{
	template<typename T>
	class Fraction
	{
		using _abs = unsigned int;
	public:
		Fraction() = default;
		Fraction(T numerator, T denominator) :
			numerator{ numerator }
		{
			SetDenom(denominator);
		}

		// Code found from Gemini AI
		// Function to calculate the least common multiple (LCM)
		T FindLCM(T a, T b) const
		{
			return (a * b) / FindGCD(a, b);
		}

		T FindGCD(T a, T b) const
		{
			while (b != 0)
			{
				T temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}

		// ARITHMETIC OPERATORS
		Fraction<T> operator + (const Fraction<T>& otherFrac) const
		{
			Fraction<T> newThis(Simplify());
			Fraction<T> newOther(otherFrac.Simplify());
			T lcm = FindLCM(newThis.denominator, newOther.denominator);
			newThis.numerator *= lcm;
			newOther.numerator *= lcm;
			return Fraction<T>(newThis.numerator + newOther.numerator, newThis.denominator * lcm);
		}

		Fraction<T> operator - (const Fraction<T>& otherFrac) const
		{
			Fraction<T> newThis(Simplify());
			Fraction<T> newOther(otherFrac.Simplify());
			T lcm = FindLCM(newThis.denominator, newOther.denominator);
			newThis.numerator *= lcm;
			newOther.numerator *= lcm;
			return Fraction<T>(newThis.numerator - newOther.numerator, newThis.denominator * lcm);
		}

		Fraction<T> operator * (const Fraction<T>& otherFrac) const
		{
			return Fraction<T>(numerator * otherFrac.numerator, denominator * otherFrac.denominator);
		}

		Fraction<T> operator / (const Fraction<T>& otherFrac) const
		{
			// When dividing fractions, the second fraction is inverted and then you multiply straight across
			return Fraction<T>(numerator * otherFrac.denominator, denominator * otherFrac.numerator);
		}

		// COMPARISON OPERATORS
		bool operator == (const Fraction<T>& otherFrac) const
		{
			return (numerator == otherFrac.numerator && denominator == otherFrac.denominator);
		}

		bool operator != (const Fraction<T>& otherFrac) const
		{
			return !(this == otherFrac);
		}

		bool operator > (const Fraction<T>& otherFrac) const
		{
			double thisDouble = numerator / denominator;
			double otherDouble = otherFrac.numerator / otherFrac.denominator;
			return thisDouble > otherDouble;
		}

		bool operator < (const Fraction<T>& otherFrac) const
		{
			return ToDouble() < otherFrac.ToDouble();
		}

		bool operator >= (const Fraction<T>& otherFrac) const
		{
			return (this > otherFrac || this == otherFrac);
		}

		bool operator <= (const Fraction<T>& otherFrac) const
		{
			return (this < otherFrac || this == otherFrac);
		}

		// STREAM OPERATORS
		template<typename U>
		friend std::ostream& operator << (std::ostream& ostream, const Fraction<U>& frac);
		template<typename U>
		friend std::istream& operator >> (std::istream& istream, Fraction<U>& frac);

		// TO DECIMAL
		double ToDouble() { return numerator / denominator; }
		float ToFloat() { return ((float) numerator / denominator); }

		// CODE PROVIDED BY LMS, CONVERTED TO C++
		Fraction<T> Simplify() const
		{
			// Find the greatest common divisor(GCD)
			T gcd = FindGCD(abs(numerator), abs(denominator));

			// Divide both numerator and denominator by the GCD
			T simplifiedNumerator = numerator / gcd;
			T simplifiedDenominator = denominator / gcd;

			// Handle sign(keep sign in numerator)
			if (denominator < 0)
			{
				simplifiedNumerator = -simplifiedNumerator;
				simplifiedDenominator = -simplifiedDenominator;
			}

			return Fraction<T>(simplifiedNumerator, simplifiedDenominator);
		}

	private:
		T numerator = 0;
		T denominator = 1;

		void SetDenom(T denom) { if (denom > 0) { denominator = denom; } }

		_abs abs(T a) const
		{
			return (a > 0 ? a : static_cast<_abs>(a));
		}
	};

	template<typename T>
	std::ostream& operator << (std::ostream& ostream, const Fraction<T>& frac)
	{
		ostream << frac.numerator << "/" << frac.denominator;
		return ostream;
	}

	template<typename T>
	std::istream& operator >> (std::istream& istream, Fraction<T>& frac)
	{
		T num, den;
		char dash;

		istream >> num >> dash >> den;
		frac = Fraction<T>(num, den);
		
		return istream;
	}
}