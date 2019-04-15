class Vector;
class Vector
{
	float x, y, z;

	inline Vector()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	inline Vector(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	inline Vector &operator=(const Vector &v)
	{
		x = v.x; y = v.y; z = v.z;

		return 
			*this;
	}

	inline float &operator[](int i)
	{
		return 
			((float*)this)[i];
	}

	inline bool operator==(const Vector &v)
	{
		return
			(v.x != x) || (v.y != y) || (v.z != z);
	}

	inline Vector &operator+=(const Vector &v)
	{
		x += v.x; y += v.y; z += v.z;

		return 
			*this;
	}

	inline Vector &operator-=(const Vector &v)
	{
		x -= v.x; y -= v.y; z -= v.z;

		return 
			*this;
	}

	inline Vector &operator*=(float fl)
	{
		x *= fl; y *= fl; z *= fl;

		return
			*this;
	}

	inline Vector &operator*=(const Vector &v)
	{
		x *= v.x; y *= v.y; z *= v.z;

		return 
			*this;
	}

	inline Vector &operator+=(float fl)
	{
		x += fl; y += fl; z += fl;

		return 
			*this;
	}

	inline Vector &operator-=(float fl)
	{
		x -= fl; y -= fl; z -= fl;

		return 
		   *this;
	}

	inline Vector &operator/=(float fl)
	{
		float oofl = 1.0f / fl;
		x *= oofl; y *= oofl; z *= oofl;

		return 
			*this;
	}

	inline Vector &operator/=(const Vector &v)
	{
		x /= v.x; y /= v.y; z /= v.z;

		return
			*this;
	}

	inline Vector operator+(const Vector &v) const
	{
		Vector vRes;
		vRes.x = x + v.x; vRes.y = y + v.y; vRes.z = z + v.z;

		return 
			vRes;
	}


	inline Vector operator-(const Vector &v) const
	{
		Vector vRes;
		vRes.x = x - v.x; vRes.y = y - v.y; vRes.z = z - v.z;

		return
			vRes;
	}

	inline Vector operator*(float fl) const
	{
		Vector vRes;
		vRes.x = x * fl; vRes.y = y * fl; vRes.z = z * fl;

		return 
			vRes;
	}

	inline Vector operator*(const Vector &v) const
	{
		Vector vRes;
		vRes.x = x * v.x; vRes.y = y * v.y; vRes.z = z * v.z;

		return
			vRes;
	}

	inline Vector operator/(float fl) const
	{
		Vector vRes;
		vRes.x = x / fl; vRes.y = y / fl; vRes.z = z / fl;

		return
			vRes;
	}

	inline Vector operator/(const Vector &v) const
	{
		Vector vRes;
        vRes.x = x / v.x; vRes.y = y / v.y; vRes.z = z / v.z;

		return
			vRes;
	}

};
