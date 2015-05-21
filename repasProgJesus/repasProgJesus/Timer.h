

class Timer
{
public:
	Timer();
	Timer(double);
	double getTime();

	float getFPS(double);

	void Pause(double);


private:
	double time;


};