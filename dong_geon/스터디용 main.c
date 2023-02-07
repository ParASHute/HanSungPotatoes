#include <stdio.h>

int main(void)
{
	int h, m, s, time;
	int nh, nm, ns, ntime;
	int missiontime, mh, mm, ms;
	scanf("%d:%d:%d", &h, &m, &s);
	scanf("%d:%d:%d", &nh, &nm, &ns);
	
	time = h * 3600 + m * 60 + s;
	ntime = nh * 3600 + nm * 60 + ns;
	missiontime = ntime - time;
	if (missiontime < 0)
		missiontime += 3600 * 24;
	
	mh = missiontime / 3600;
	mm = missiontime % 3600 / 60;
	ms = missiontime % 60;
	printf("%02d:%02d:%02d", mh, mm, ms);
}