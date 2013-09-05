/*Define Math Constants*/
#define PI 3.1415926535897932384626433832795
#define HALF_PI 1.5707963267948966192313216916398
#define TWO_PI 6.283185307179586476925286766559
#define DEG_TO_RAD 0.017453292519943295769236907684886
#define RAD_TO_DEG 57.295779513082320876798154814105

/*Define Simple Math functions*/
#define Min(a,b)	((a)<(b)?(a):(b))
#define Max(a,b)	((a)>(b)?(a):(b))
#define Abs(x)		((x)>0?(x):-(x))
#define Constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))
#define Round(x)    	((x)>=0?(long)((x)+0.5):(long)((x)-0.5))
#define Radians(deg)	((deg)*DEG_TO_RAD)
#define Degrees(rad) 	((rad)*RAD_TO_DEG)
#define Sq(x) 			((x)*(x))

long Map(long x, long in_min, long in_max, long out_min, long out_max);

long Map(long x, long in_min, long in_max, long out_min, long out_max){
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


