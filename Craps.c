
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// enumeration example
enum Status { CONTINUE, WON, LOST };

// A function prototype, of the function with will simulate a roll of the dice.
int rollDice(void);

int main(void)
{
	// Randomize the random number generator.
	srand(time(NULL));

	// This is the point the player must make to win.
	int myPoint;

	// This is the current state of the game at any moment in time.
	enum Status gameStatus;

	// The first roll of the dice.
	int sum = rollDice();

	//Type in a wager
	int balance = 1000;
	int wage;

	printf("Type in amount of wage you wish to bet: ");
    scanf_s("%d", &wage);

	if (wage <= balance)
	{
		gameStatus = CONTINUE;
	}
	else
	{
		printf("Ivaild input.\n");
	}
		

	// Determine the status of the game based on the value of the dice.
	switch (sum)
	{
		// A winner on the first roll!
	case 7:
	case 11:
		gameStatus = WON;
		break;

		// A loser on the first roll!
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

		// If you didn't win and you didn't lose, remember your point.
	default:
		gameStatus = CONTINUE;
		myPoint = sum;
		printf("Point to make is: %d\n", myPoint);
		break;
	} // end switch

// While the game is not complete, keep rolling.
	while (gameStatus == CONTINUE)
	{
		// Roll the dice.
		sum = rollDice();

		if (sum == myPoint)
		{
			gameStatus = WON;
		}
		else
		{
			if (sum == 7)
			{
				gameStatus = LOST;
			}
		}
	} // end while
	
	
	
	// Display the game result.
	if (gameStatus == WON)
	{

		printf("Your balance is now: %d \n", balance + wage);
		printf("Player wins!\n");
		balance = balance + wage;
	}
	else if (gameStatus == LOST)
	{
		printf("Your balance is now: %d \n", balance - wage);
		printf("Player loses.\n");
		balance = balance - wage;
	}
	else if (balance == 0)
	{
		printf("Looks like your all out buddy! ");
	}
	printf("\n");


	int answer;
	int yes, no;

	yes = 1;
	no = 2;
	printf("Do you wish to continue? Press 1 for yes, 2 for no...\n");
	scanf_s("%d", &answer);

	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;

		

		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;



		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;



		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;



		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;



		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;



		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;



		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;



		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	if (answer == 1)
	{
		// Randomize the random number generator.
		srand(time(NULL));

		// This is the point the player must make to win.
		int myPoint;

		// This is the current state of the game at any moment in time.
		enum Status gameStatus;

		// The first roll of the dice.
		int sum = rollDice();

		//Type in a wager
		int wage;



		printf("Type in amount of wage you wish to bet: ");
		scanf_s("%d", &wage);

		if (wage <= balance)
		{
			gameStatus = CONTINUE;
		}
		else
		{
			printf("Ivaild input.\n");
		}


		// Determine the status of the game based on the value of the dice.
		switch (sum)
		{
			// A winner on the first roll!
		case 7:
		case 11:
			gameStatus = WON;
			break;

			// A loser on the first roll!
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

			// If you didn't win and you didn't lose, remember your point.
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point to make is: %d\n", myPoint);
			break;
		} // end switch

	// While the game is not complete, keep rolling.
		while (gameStatus == CONTINUE)
		{
			// Roll the dice.
			sum = rollDice();

			if (sum == myPoint)
			{
				gameStatus = WON;
			}
			else
			{
				if (sum == 7)
				{
					gameStatus = LOST;
				}
			}
		} // end while



		// Display the game result.
		if (gameStatus == WON)
		{
			printf("Your balance is now: %d \n", balance + wage);
			printf("Player wins!\n");
			balance = balance + wage;
		}
		else if (gameStatus == LOST)
		{
			printf("Your balance is now: %d \n", balance - wage);
			printf("Player loses.\n");
			balance = balance - wage;
		}
		else if (balance == 0)
		{
			printf("Looks like your all out buddy! ");
			return 0;
		}

		int answer;
		int yes, no;

		yes = 1;
		no = 2;

		printf("Do you wish to continue? Press 1 for YES or 2 for NO. \n");
		scanf_s("%d", &answer);
	}
	else (answer == 2 || balance == 0);
	{
		printf("Game Over");
	}
} // end main()

// A function to simulate the roll of two dice.  The function takes in no parameters,
// and returns the sum of two individual random number generations, each representing
// one die.
int rollDice(void)
{
	// Rolling the two dice.
	int die1 = 1 + (rand() % 6); // generates a random number. The precent makes it between 1-6.
	int die2 = 1 + (rand() % 6);

	// Printing the result: an example of multiple format specifiers in a single printf(),
	// and an example of an expression (not just a variable) matching a format specifier.
	printf("Player rolls: %d + %d = %d\n", die1, die2, die1 + die2);

	// Return the result.
	return die1 + die2;
}
