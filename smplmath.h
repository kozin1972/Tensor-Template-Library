/*
 * smplmath.h
 *
 *  Created on: 23 мая 2019 г.
 *      Author: Alexey Kozin
 *
 *  Please report bugs to tpptensor@mail.ru
 */

#ifndef SMPLMATH_H_
#define SMPLMATH_H_

#include <math.h>
//#include <cstdlib>

namespace iTTL
{
	template <typename T>
	inline T sign(T v) noexcept
	{
		return v?(v>0.0?1.0:-1.0):0.0;
	}

	template <typename T>
	T sqrt(T v);

	template<>
	inline double sqrt<double>(double v)
	{
		return ::sqrt(v);
	}
	template<>
	inline float sqrt<float>(float v)
	{
		return ::sqrt(v);
	}

	template <typename T>
	T log(T v);

	template<>
	inline double log<double>(double v)
	{
		return ::log(v);
	}
	template<>
	inline float log<float>(float v)
	{
		return ::log(v);
	}

	template <typename T>
	T sin(T v) noexcept;

	template<>
	inline double sin<double>(double v) noexcept
	{
		return ::sin(v);
	}
	template<>
	inline float sin<float>(float v) noexcept
	{
		return ::sin(v);
	}

	template <typename T>
	T cos(T v) noexcept;

	template<>
	inline double cos<double>(double v) noexcept
	{
		return ::cos(v);
	}
	template<>
	inline float cos<float>(float v) noexcept
	{
		return ::cos(v);
	}

	template <typename T>
	T abs(T v) noexcept;

	template<>
	inline double abs<double>(double v) noexcept
	{
		return ::fabs(v);
	}
	template<>
	inline float abs<float>(float v) noexcept
	{
		return ::fabs(v);
	}

	template <typename T>
	inline T rand() noexcept;

	template <>
	inline double rand<double>() noexcept
	{
		return (double)(((double)::rand())/(double)RAND_MAX+::rand())/(double)(RAND_MAX);
	}
	template <>
	inline float rand<float>() noexcept
	{
		return (float)(((float)::rand())/(float)RAND_MAX+::rand())/(float)(RAND_MAX);
	}

	template <typename T>
	T norm_rand() noexcept;

	template<>
	inline double norm_rand<double>() noexcept
	{
		return sqrt<double>(-2.0*log<double>(1.0-rand<double>()))*cos<double>(2.0*M_PI*rand<double>());
	}
	template<>
	inline float norm_rand<float>() noexcept
	{
		return sqrt<float>(-2.0*log<float>(1.0-rand<float>()))*cos<float>(2.0*M_PI*rand<float>());
	}


};



#endif /* SMPLMATH_H_ */
