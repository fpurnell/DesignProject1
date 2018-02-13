/*
INPUT PHASE
CALCULATION PHASE
COMPARISON PHASE
ITERATIVE/CONCLUSION PHASE
RESULTS PRINTING PHASE
*/

/*

 1 ---p12--- 2 ---p2A--- A
 |           |           |
p13         p24         pA5
 |           |           |
 3 ---p34--- 4 ---p45--- 5
 |           |           |
pB3         p46         p57
 |           |           |
 B ---pb6--- 6 ---p67--- 7

*/

#include "definitions.h"

float pressure1 = 0;
float pressure2 = 0;
float pressure3 = 0;
float pressure4 = 0;
float pressure5 = 0;
float pressure6 = 0;
float pressure7 = 0;

long long int flow1 = 0;
long long int flow2 = 0;
long long int flow3 = 0;
long long int flow4 = 0;
long long int flow5 = 0;
long long int flow6 = 0;
long long int flow7 = 0;

void main()
{

}

float ThermalExpansion(float delT, int stPipeLength)
{
	float calculatedThermalExpansion = 0;
	calculatedThermalExpansion = THERMAL_EXPANSION_COEFFICIENT * delT * stPipeLength;
	return calculatedThermalExpansion;
}
float DeltaPressure()
{
	/*
	inputs = 
	*/
	float calculatedDeltaPressure = 0;
	return calculatedDeltaPressure;
}
long long int Flow(float idPipe, float velocity)
{

	long long int calculatedFlow = 0;
	return calculatedFlow;
}