//#include <>

int main()
{
	float min_f = -3.4e38f;
	float max_f = +3.4e38f;

	double min_d = -1.79e308;
	double max_d = +1.79e308;

	long double min_ld = -1.79e308; //on windows
	long double max_ld = +1.79e308; //on windows

	long double min_ldx = -1.18e4932; //other plats
	long double max_ldx = +1.18e4932;

	return 0;
}