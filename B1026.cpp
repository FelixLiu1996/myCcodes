#include<stdio.h>
#include<time.h>
int main(){
	long long  C1, C2, Del;
	double Time;
	int hour, minte, second;
	scanf("%lld%lld", &C1, &C2);
	Del = C2 - C1;
	Time = Del / 100.0;
	hour = Time / 3600;
	minte = (Time - 3600 * hour) / 60;
	second = (int)((Time - 3600 * hour - minte * 60) + 0.5);
	printf("%02d:%02d:%02d", hour, minte, second);
	return 0;
}
