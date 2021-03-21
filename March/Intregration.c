#include<stdio.h> 
#include<math.h>


float y(float x) 
{ 
	return pow(x,2); //f(x)= x^2
} 

// Function to evalute the value of integral 
float trapezoidal(float lower_limit, float upper_limit, float sub_interval) 
{ 
	
	float step_size = (upper_limit-lower_limit)/sub_interval; 

	
	float integration = y(lower_limit)+y(upper_limit); 

	
	for (int i = 1; i < sub_interval; i++) 
		integration += 2*y(lower_limit+i*step_size); 

	 
	return (step_size/2)*integration; 
} 


int main() 
{ 
	// Range of definite integral 
	float x0 = 0; 
	float xn = 10; 


	int n = 600; 

	printf("Value of integral is %0.4f\n", 
				trapezoidal(x0, xn, n)); 
	return 0; 
} 
