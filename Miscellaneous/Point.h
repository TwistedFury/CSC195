#pragma once

#include <iostream>

namespace math
{
	template<typename T>
	class Point
	{
	public:
		Point() = default;
		Point(T x, T y) :
			x{ x },
			y{ y }
		{
		}

		Point<T> operator + (const Point<T>& other) const
		{
			return Point<T>(x + other.x, y + other.y);
		}

		Point<T> operator - (const Point<T>& other) const
		{
			return Point<T>(x - other.x, y - other.y);
		}

		bool operator == (const Point<T>& other) const
		{
			return (x == other.x && y == other.y);
		}

		bool operator != (const Point<T>& other) const
		{
			return !(*this == other);
		}

		/*friend std::ostream& operator << (std::ostream& ostream, const Point<T>& p) const
		{
			ostream << p.x << ", " << p.y;
			return ostream;
		}*/

		T GetX() { return x; }
		T GetY() { return y; }

	private:
		T x = 0;
		T y = 0;
	};

	using ipoint_t = Point<int>;
	using fpoint_t = Point<float>;
	using spoint_t = Point<short>;
}
