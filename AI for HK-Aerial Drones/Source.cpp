#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{	//It generates a random number that initializes at zero.
	srand(static_cast<unsigned int>(time(0)));

	//Calculates the number of tries
	//It starts the tries at zero and goes up after an amount of tries.
	int Binary_AI_tries = 0;
	int Human_tries = 0;
	int Linear_AI_tries = 0;
	int Random_AI_tries = 0;

	//This is the lowest number the drone can choose from when finding the number.
	int Binary_AI_searchGridLowNumber = 1;
	int Human_searchGridLowNumber = 1;
	int Linear_AI_searchGridLowNumber = 1;
	int Random_AI_searchGridLowNumber = 1;
	
	//This is the highest number the drone can choose from when finding the number.
	int Binary_AI_searchGridHighNumber = 144;
	int Human_searchGridHighNumber = 144;
	int Linear_AI_searchGridHighNumber = 144;
	int Random_AI_searchGridHighNumber = 144;
	
	//Keeps the target location the same.
	//The exact number its gonna come up with by using a random number.
	int exactTargetLocation = rand() % 144 + 1;
	
	//This gives the enemies location after a number of guesses
	int Binary_AI_Location_Prediction = 0;
	int	Human_Location_Prediction = 0;
	int Linear_AI_Location_Prediction = 1;
	int	Random_AI_Location_Prediction = 0;

	
	
	//Title of the Program.
	cout << "\t***A hunter kill drone is arriving in the area T minus 3 seconds***\n\n ";
	cout << "HK 152 is in the area and has started searching for organic life form.\n\n ";
	

	// ******Human Search Section******//
	
	do {
		//adds the number of times
		++Human_tries;
		
		
		
		//This the human player input.
		cout << "\nHuman type in numbers for enemy search ("<<Human_searchGridLowNumber<< "_" << Human_searchGridHighNumber << ") Search target guess at: ";
		cin >> Human_Location_Prediction;
		++Human_Location_Prediction;
		
		//This just shows the number of pings it took or tries and if the number is to low.
		if (Human_Location_Prediction > exactTargetLocation)
		{
			cout << "\nHuman receiving ping # " << Human_tries << endl;
			cout << "\nAlert! search radius was to high"<< endl;
			Human_searchGridHighNumber = Human_Location_Prediction - 1;
		}
		//This just shows the number of pings it took or tries and if the number is to low.
		else if (Human_Location_Prediction < exactTargetLocation)
		{
			cout << "\nHuman receiving ping # " << Human_tries << endl;
			cout << "\nAlert! search radius was to Low" << endl;
			Human_searchGridLowNumber = Human_Location_Prediction + 1;
		}
		//This statement then shows the final number that the enemy is located in.
		else
		{
			cout << "\nenemy was hiding at location # " << exactTargetLocation << endl;
			cout << "\nTarget was found at location # " << Human_Location_Prediction << endl;
			cout << "\nHuman took this many tries # " << Human_tries << endl;
		}

	}
	//This comes up with the final numbers that it was looking for.
	while (Human_Location_Prediction != exactTargetLocation);
	
	// ******Human Search Section END******//

	cout << "Human is done with searching for the enemy\n";
	system("pause");
	
	// ******Binary AI Search Section******//
	
	do {
		//adds the number of times
		++Binary_AI_tries;
		// Here it puts the high and low number then subtracts it. It then divides the number that it come up with and adds it to the low number.
		Binary_AI_Location_Prediction = ((Binary_AI_searchGridHighNumber - Binary_AI_searchGridLowNumber) / 2) + Binary_AI_searchGridLowNumber;

		//This just shows the number of pings it took or tries and if the number is to high.
		if (Binary_AI_Location_Prediction > exactTargetLocation)
		{
			cout << "\nHK 152 receiving ping # " << Binary_AI_tries << endl;
			cout << "\nAlert! search radius was to high # " << Binary_AI_Location_Prediction << endl;
			Binary_AI_searchGridHighNumber = Binary_AI_Location_Prediction - 1;
		}
		//This just shows the number of pings it took or tries and if the number is to low.
		else if (Binary_AI_Location_Prediction < exactTargetLocation)
		{
			cout << "\nHK 152 receiving ping # " << Binary_AI_tries << endl;
			cout << "\nAlert! search radius was to Low # " << Binary_AI_Location_Prediction << endl;
			Binary_AI_searchGridLowNumber = Binary_AI_Location_Prediction + 1;
		}
		//This statement then shows the final number that the enemy is located in.
		else
		{
			cout << "\nenemy was hiding at location # " << exactTargetLocation << endl;
			cout << "\nTarget was found at location # " << Binary_AI_Location_Prediction << endl;
			cout << "\nSkynet HK 152 Aerial took this many tries # " << Binary_AI_tries << endl;
		}

	}
	//This comes up with the final numbers that it was looking for.
	while (Binary_AI_Location_Prediction != exactTargetLocation);
	
	// ******Binary AI Search Section END******//

	cout << "HK 152 is done with searching for the enemy\n";
	system("pause");

	// ******Linear AI Search Section******//
	
	do {
		//adds the number of times
		++Linear_AI_tries;

		//Here it predicts the number by starting by 1 and going to the target location.
		cout << "\nHK 634 is now searching for target in linear sequence # " << Linear_AI_Location_Prediction << endl;
		Linear_AI_Location_Prediction++;

		//This just shows the number of pings it took. in other words Tries tries.
		if (Linear_AI_Location_Prediction > exactTargetLocation)
		{
			cout << "\nHK 634 receiving ping # " << Linear_AI_tries << endl;
			
			
		}
		//This just shows the number of pings it took. in other words Tries tries.
		else if (Linear_AI_Location_Prediction < exactTargetLocation)
		{
			cout << "\nHK 634 receiving ping # " << Linear_AI_tries << endl;
			
			
		}
		//This statement then shows the final number that the enemy is located in.
		else
		{
			cout << "\nEnemy was hiding at location # " << exactTargetLocation << endl;
			cout << "\nHK 634 has Predicted enemy location at # " << Linear_AI_Location_Prediction << endl;
			cout << "\nSkynet HK 634 Aerial took this many tries # " << Linear_AI_tries << endl;
		}

	}
	//This comes up with the final numbers that it was looking for.
	while (Linear_AI_Location_Prediction != exactTargetLocation);
	
	// ******Linear AI Search Section END******//

	cout << "Human is done with searching for the enemy\n";
	system("pause");
	
	// ******Random AI Search Section******//
	
	do {
		//adds the number of times

	
		++Random_AI_tries;
		cout << "\nHK 717 is now searching for target in Random Sequence # " << rand() % 144 + 1;
		Random_AI_Location_Prediction++;
	

		//if the target number is seekingtargetlocation is greater than the exacttargetlocation. It comes up with a number and is then added to the target that it was looking for.
		if (Random_AI_Location_Prediction > exactTargetLocation)
		{
			cout << "\nHK 717 receiving ping # " << Random_AI_tries << endl;
			

		}
		//This just shows the number of pings it took or tries.
		else if (Random_AI_Location_Prediction < exactTargetLocation)
		{
			cout << "\nHK 717 receiving ping # " << Random_AI_tries << endl;
			

		}
		//This statement then shows the final number that the enemy is located in.
		else
		{
			cout << "\nEnemy was hiding at location # " << exactTargetLocation << endl;
			cout << "\nHK 717 has Predicted enemy location at # " << Random_AI_Location_Prediction << endl;
			cout << "\nSkynet HK 717 Aerial took this many tries # " << Random_AI_tries << endl;
		}

	}
	//This comes up with the final numbers that it was looking for.
	while (Random_AI_Location_Prediction != exactTargetLocation);
	
	// ******Random AI Search Section END******//

	//Who Won//
	cout << "\n\n\t ***Final Results*** \n\n";
	
	//Shows the amount of tries it took for each turn//
	cout << "\nThe Human Found the target after # " << Human_tries << "attempts" << endl;
	cout << "\nThe Binary AI Found the target after # " << Binary_AI_tries<< "attempts" << endl;
	cout << "\nThe Linear AI Found the target after # " << Linear_AI_tries << "attempts" << endl;
	cout << "\nThe Random AI Found the target after # " << Random_AI_tries << "attempts" << endl;
	
	
	return 0;

}

