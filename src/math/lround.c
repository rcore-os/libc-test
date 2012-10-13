#include <stdint.h>
#include <stdio.h>
#include "util.h"

static struct d_i t[] = {
#include "sanity/lround.h"

};

int main(void)
{
	#pragma STDC FENV_ACCESS ON
	int yi;
	float d;
	int e, i, err = 0;
	struct d_i *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		feclearexcept(FE_ALL_EXCEPT);
		yi = lround(p->x);
		e = fetestexcept(INEXACT|INVALID|DIVBYZERO|UNDERFLOW|OVERFLOW);

		if (!checkexcept(e, p->e, p->r)) {
			printf("%s:%d: bad fp exception: %s lround(%a)=%lld, want %s",
				p->file, p->line, rstr(p->r), p->x, p->i, estr(p->e));
			printf(" got %s\n", estr(e));
			err++;
		}
		if (yi != p->i) {
			printf("%s:%d: %s lround(%a) want %lld got %d\n",
				p->file, p->line, rstr(p->r), p->x, p->i, yi);
			err++;
		}
	}
	return !!err;
}