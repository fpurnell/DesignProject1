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
p13         p24         p5A
 |           |           |
 3 ---p34--- 4 ---p45--- 5
 |           |           |
p3B         p46         p57
 |           |           |
 B ---p6B--- 6 ---p67--- 7

*/

#include "definitions.h"
#pragma region variables
//Provieded Pressures
float PRESSUREA = 225;
float PRESSUREB = 0;
//Required Pressures
float PRESSURE1 = 0;
float PRESSURE2 = 0;
float PRESSURE3 = 0;
float PRESSURE4 = 0;
float PRESSURE5 = 0;
float PRESSURE6 = 135;
float PRESSURE7 = 100;

//Calculated Pressures (-1 for secured)
float pressure12 = 0;
float pressure13 = 0;

float pressure2A = 0;
float pressure24 = 0;

float pressure3B = -1;
float pressure34 = 0;

float pressure45 = 0;
float pressure46 = 0;

float pressure5A = 0;
float pressure57 = -1;

float pressure6B = -1;
float pressure67 = 0;

//Provided Flow
long long int FLOWA = 640e3;
long long int FLOWB = 0;
//Required Flow
long long int FLOW1 = 80e3;
long long int FLOW2 = 100e3;
long long int FLOW3 = 70e3;
long long int FLOW4 = 75e3;
long long int FLOW5 = 120e3;
long long int FLOW6 = 125e3;
long long int FLOW7 = 70e3;

//Calculated FLow (0 for secured)
long long int flow12 = 0;
long long int flow13 = 0;

long long int flow2A = 0;
long long int flow24 = 0;

long long int flow3B = 0;
long long int flow34 = 0;

long long int flow45 = 0;
long long int flow46 = 0;

long long int flow5A = 0;
long long int flow57 = 0;

long long int flow6B = 0;
long long int flow67 = 0;

//rho values calculated with steam table
float RHO12 = 0;
float RHO13 = 0;
float RHO2A = 0;
float RHO24 = 0;
float RHO5A = 0;
float RHO34 = 0;
float RHO45 = 0;
float RHO46 = 0;
float RHO67 = 0;

//straight pipe length
short LENGTH12 = 9000;
short LENGTH13 = 4000;
short LENGTH2A = 4000;
short LENGTH24 = 3500;
short LENGTH34 = 5000;
short LENGTH45 = 8000;
short LENGTH46 = 3500;
short LENGTH5A = 3000;
short LENGTH67 = 7000;
#pragma endregion

void main()
{
	//input
		//ask for isolated pipes?

	//calculation
	flow67 = FLOW7;
	flow46 = flow67 + FLOW6;
	//unknowns
	flow12;
	flow13 = flow34 - FLOW3;
	flow2A = FLOWA - flow5A;
	flow24;
	flow3B;
	flow34;
	flow45 = flow5A - FLOW5;
	flow5A = FLOWA - flow2A;
	flow57;
	flow6B;
	//resolution
	PRESSURE2 = PRESSUREA - pressure2A;

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