#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

/* Macro definition */
#define LIGHTNO1	0
#define LIGHTNO2	1
#define LIGHTNO3	2
#define LIGHTNO4	3
#define LIGHTNO5	4
#define LIGHTNO6	5
#define LIGHTNO7	6
#define LIGHTNO8	7

#define ON	1
#define OFF	0

/* Global variable */
static unsigned char light_status = 0;

void notify(unsigned char lightno, bool status)
{
	if (status == OFF) {
		light_status &= ~(1UL << lightno);
	} else {
		light_status |= (status << lightno);
	}
}

void main()
{
	notify(LIGHTNO1, ON);
	printf("light status: %x\n", light_status);
	notify(LIGHTNO2, ON);
	printf("light status: 0x%x\n", light_status);
	notify(LIGHTNO3, ON);
	printf("light status: 0x%x\n", light_status);
	notify(LIGHTNO4, ON);
	printf("light status: 0x%x\n", light_status);

	notify(LIGHTNO1, OFF);
	printf("light status: 0x%x\n", light_status);
	notify(LIGHTNO2, OFF);
	printf("light status: 0x%x\n", light_status);
	notify(LIGHTNO3, OFF);
	printf("light status: 0x%x\n", light_status);
	notify(LIGHTNO4, OFF);
	printf("light status: 0x%x\n", light_status);
}
	
